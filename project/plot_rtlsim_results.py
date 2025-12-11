#!/usr/bin/env python3
"""
Plot performance results from rtlsim unified cache sweep tests.
Generates line charts for: cycles, IPC, L1 hit ratio, L1 access, L1 misses, DRAM access, memory latency.
"""

import os
import re
import glob
import matplotlib.pyplot as plt
import numpy as np
from collections import defaultdict

# Configuration
RESULTS_DIR = "/home/kejunwu/vortex/project/rtlsim_results"
OUTPUT_DIR = "/home/kejunwu/vortex/project/rtlsim_plots"

# Only include w4_t4 configuration
CONFIGS_FILTER = ['w4_t4']

# SM sets configurations (in order) - from s8 to s112
SM_SETS_LIST = ['separate', '8', '16', '32', '64', '96', '112']

# X-axis labels for unified mode sm_sets values
SM_SETS_LABELS = {
    'separate': 'Separate\n(16KB L1+16KB SM)',
    # '0': 's=0\n(32KB L1)',
    '8': 's=8\n(30KB L1+2KB SM)',
    '16': 's=16\n(28KB L1+4KB SM)',
    '32': 's=32\n(24KB L1+8KB SM)',
    '64': 's=64\n(16KB L1+16KB SM)',
    '96': 's=96\n(8KB L1+24KB SM)',
    '112': 's=112\n(4KB L1+28KB SM)',
}

def parse_log_file(log_path):
    """Parse a log file and extract performance metrics."""
    metrics = {
        'status': 'FAILED',
        'cycles': 0,
        'ipc': 0.0,
        'instrs': 0,
        # Per-core aggregated metrics
        'dcache_reads': 0,
        'dcache_writes': 0,
        'dcache_read_misses': 0,
        'dcache_write_misses': 0,
        'dcache_read_hit_ratio': 0.0,
        'dcache_write_hit_ratio': 0.0,
        # Memory metrics
        'memory_requests': 0,
        'memory_reads': 0,
        'memory_writes': 0,
        'memory_latency': 0,
    }
    
    if not os.path.exists(log_path):
        return None
    
    with open(log_path, 'r') as f:
        content = f.read()
    
    # Check status - support multiple detection methods
    # 1. STATUS: PASSED (from blackbox.sh script)
    # 2. PASSED! (from direct program output with tee)
    # 3. Has valid cycles data (fallback)
    if 'STATUS: PASSED' in content or 'PASSED!' in content:
        metrics['status'] = 'PASSED'
    
    # Parse total cycles and IPC (last occurrence)
    # Format: PERF: instrs=2005360, cycles=539301, IPC=3.718443
    matches = re.findall(r'PERF: instrs=(\d+), cycles=(\d+), IPC=([0-9.]+)', content)
    if matches:
        last_match = matches[-1]
        metrics['instrs'] = int(last_match[0])
        metrics['cycles'] = int(last_match[1])
        metrics['ipc'] = float(last_match[2])
    
    # Parse per-core dcache metrics and aggregate
    dcache_reads = []
    dcache_writes = []
    dcache_read_misses = []
    dcache_write_misses = []
    dcache_read_hit_ratios = []
    dcache_write_hit_ratios = []
    
    # dcache reads
    for match in re.finditer(r'PERF: core\d+: dcache reads=(\d+)', content):
        dcache_reads.append(int(match.group(1)))
    
    # dcache writes
    for match in re.finditer(r'PERF: core\d+: dcache writes=(\d+)', content):
        dcache_writes.append(int(match.group(1)))
    
    # dcache read misses with hit ratio
    for match in re.finditer(r'PERF: core\d+: dcache read misses=(\d+) \(hit ratio=(\d+)%\)', content):
        dcache_read_misses.append(int(match.group(1)))
        dcache_read_hit_ratios.append(int(match.group(2)))
    
    # dcache write misses with hit ratio
    for match in re.finditer(r'PERF: core\d+: dcache write misses=(\d+) \(hit ratio=(\d+)%\)', content):
        dcache_write_misses.append(int(match.group(1)))
        dcache_write_hit_ratios.append(int(match.group(2)))
    
    if dcache_reads:
        metrics['dcache_reads'] = sum(dcache_reads)
    if dcache_writes:
        metrics['dcache_writes'] = sum(dcache_writes)
    if dcache_read_misses:
        metrics['dcache_read_misses'] = sum(dcache_read_misses)
    if dcache_write_misses:
        metrics['dcache_write_misses'] = sum(dcache_write_misses)
    if dcache_read_hit_ratios:
        metrics['dcache_read_hit_ratio'] = np.mean(dcache_read_hit_ratios)
    if dcache_write_hit_ratios:
        metrics['dcache_write_hit_ratio'] = np.mean(dcache_write_hit_ratios)
    
    # Parse memory metrics
    # Format: PERF: memory requests=22249 (reads=1949, writes=20300)
    match = re.search(r'PERF: memory requests=(\d+) \(reads=(\d+), writes=(\d+)\)', content)
    if match:
        metrics['memory_requests'] = int(match.group(1))
        metrics['memory_reads'] = int(match.group(2))
        metrics['memory_writes'] = int(match.group(3))
    
    # Format: PERF: memory latency=91 cycles
    match = re.search(r'PERF: memory latency=(\d+) cycles', content)
    if match:
        metrics['memory_latency'] = int(match.group(1))
    
    return metrics


def collect_all_results():
    """Collect results from all log files."""
    results = defaultdict(lambda: defaultdict(lambda: defaultdict(dict)))
    
    # Find all app directories
    for app_dir in glob.glob(os.path.join(RESULTS_DIR, "*_w*_t*")):
        dir_name = os.path.basename(app_dir)
        
        # Parse directory name: sgemm_w4_t4 or sgemm2_w8_t8
        match = re.match(r'(\w+)_w(\d+)_t(\d+)', dir_name)
        if not match:
            continue
        
        app = match.group(1)
        warps = match.group(2)
        threads = match.group(3)
        config = f"w{warps}_t{threads}"
        
        # Parse separate mode log
        separate_log = os.path.join(app_dir, f"{app}_separate.log")
        metrics = parse_log_file(separate_log)
        if metrics:
            results[app][config]['separate'] = metrics
        
        # Parse unified mode logs
        for sm_sets in ['8', '16', '32', '64', '96', '112']:
            unified_log = os.path.join(app_dir, f"{app}_s{sm_sets}.log")
            metrics = parse_log_file(unified_log)
            if metrics:
                results[app][config][sm_sets] = metrics
    
    return results


def plot_metric(results, app, metric_key, ylabel, title, filename, 
                higher_is_better=True, percentage=False):
    """Plot a single metric as line chart."""
    
    configs = sorted([c for c in results[app].keys() if c in CONFIGS_FILTER])
    if not configs:
        print(f"No data for {app} with configs {CONFIGS_FILTER}")
        return
    
    n_configs = len(configs)
    n_sm_sets = len(SM_SETS_LIST)
    
    fig, ax = plt.subplots(figsize=(10, 5))
    
    x = np.arange(n_sm_sets)
    
    # Define markers and colors for different configs
    markers = ['o', 's', '^', 'D', 'v', '<', '>', 'p']
    colors = plt.cm.tab10(np.linspace(0, 1, max(n_configs, 2)))
    
    for i, config in enumerate(configs):
        values = []
        valid_x = []
        for j, sm_sets in enumerate(SM_SETS_LIST):
            if sm_sets in results[app][config]:
                metrics = results[app][config][sm_sets]
                if metrics['status'] == 'PASSED':
                    values.append(metrics.get(metric_key, 0))
                    valid_x.append(j)
        
        if values:
            # Plot line with markers
            line = ax.plot(valid_x, values, marker=markers[i % len(markers)], 
                          label=config, color=colors[i], linewidth=2, markersize=8)
            
            # Add value labels at each point
            for xpos, val in zip(valid_x, values):
                if val > 0:
                    if percentage:
                        label = f'{val:.0f}%'
                    elif val >= 1000000:
                        label = f'{val/1000000:.2f}M'
                    elif val >= 1000:
                        label = f'{val/1000:.1f}K'
                    else:
                        label = f'{val:.2f}' if isinstance(val, float) else str(val)
                    ax.annotate(label,
                               xy=(xpos, val),
                               xytext=(0, 8),
                               textcoords="offset points",
                               ha='center', va='bottom', fontsize=8)
    
    ax.set_xlabel('Cache Configuration')
    ax.set_ylabel(ylabel)
    ax.set_title(f'{title} - {app.upper()} (RTL Simulation)')
    ax.set_xticks(x)
    ax.set_xticklabels([SM_SETS_LABELS.get(s, s) for s in SM_SETS_LIST], fontsize=8)
    ax.legend(title='Config (warps_threads)', loc='best')
    ax.grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150, bbox_inches='tight')
    plt.close()
    print(f"Saved: {filename}")


def plot_combined_hit_ratio(results, app, filename):
    """Plot combined read and write hit ratios as line charts."""
    configs = sorted([c for c in results[app].keys() if c in CONFIGS_FILTER])
    if not configs:
        return
    
    n_configs = len(configs)
    n_sm_sets = len(SM_SETS_LIST)
    
    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(14, 5))
    
    x = np.arange(n_sm_sets)
    markers = ['o', 's', '^', 'D', 'v', '<', '>', 'p']
    colors = plt.cm.tab10(np.linspace(0, 1, max(n_configs, 2)))
    
    # Read hit ratio
    for i, config in enumerate(configs):
        values = []
        valid_x = []
        for j, sm_sets in enumerate(SM_SETS_LIST):
            if sm_sets in results[app][config]:
                metrics = results[app][config][sm_sets]
                if metrics['status'] == 'PASSED':
                    values.append(metrics.get('dcache_read_hit_ratio', 0))
                    valid_x.append(j)
        
        if values:
            ax1.plot(valid_x, values, marker=markers[i % len(markers)], 
                    label=config, color=colors[i], linewidth=2, markersize=8)
            # Add value labels
            for xpos, val in zip(valid_x, values):
                ax1.annotate(f'{val:.0f}%',
                           xy=(xpos, val),
                           xytext=(0, 8),
                           textcoords="offset points",
                           ha='center', va='bottom', fontsize=8)
    
    ax1.set_xlabel('Cache Configuration')
    ax1.set_ylabel('Hit Ratio (%)')
    ax1.set_title(f'L1 Cache Read Hit Ratio - {app.upper()} (RTL)')
    ax1.set_xticks(x)
    ax1.set_xticklabels([SM_SETS_LABELS.get(s, s) for s in SM_SETS_LIST], fontsize=7)
    ax1.legend(title='Config', loc='best')
    ax1.set_ylim(0, 105)
    ax1.grid(True, alpha=0.3)
    
    # Write hit ratio
    for i, config in enumerate(configs):
        values = []
        valid_x = []
        for j, sm_sets in enumerate(SM_SETS_LIST):
            if sm_sets in results[app][config]:
                metrics = results[app][config][sm_sets]
                if metrics['status'] == 'PASSED':
                    values.append(metrics.get('dcache_write_hit_ratio', 0))
                    valid_x.append(j)
        
        if values:
            ax2.plot(valid_x, values, marker=markers[i % len(markers)], 
                    label=config, color=colors[i], linewidth=2, markersize=8)
            # Add value labels
            for xpos, val in zip(valid_x, values):
                ax2.annotate(f'{val:.0f}%',
                           xy=(xpos, val),
                           xytext=(0, 8),
                           textcoords="offset points",
                           ha='center', va='bottom', fontsize=8)
    
    ax2.set_xlabel('Cache Configuration')
    ax2.set_ylabel('Hit Ratio (%)')
    ax2.set_title(f'L1 Cache Write Hit Ratio - {app.upper()} (RTL)')
    ax2.set_xticks(x)
    ax2.set_xticklabels([SM_SETS_LABELS.get(s, s) for s in SM_SETS_LIST], fontsize=7)
    ax2.legend(title='Config', loc='best')
    ax2.set_ylim(0, 105)
    ax2.grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150, bbox_inches='tight')
    plt.close()
    print(f"Saved: {filename}")


def plot_l1_access(results, app, filename):
    """Plot L1 cache total accesses (reads + writes) as line chart."""
    configs = sorted([c for c in results[app].keys() if c in CONFIGS_FILTER])
    if not configs:
        return
    
    n_configs = len(configs)
    n_sm_sets = len(SM_SETS_LIST)
    
    fig, ax = plt.subplots(figsize=(10, 5))
    
    x = np.arange(n_sm_sets)
    markers = ['o', 's', '^', 'D', 'v', '<', '>', 'p']
    colors = plt.cm.tab10(np.linspace(0, 1, max(n_configs, 2)))
    
    for i, config in enumerate(configs):
        values = []
        valid_x = []
        for j, sm_sets in enumerate(SM_SETS_LIST):
            if sm_sets in results[app][config]:
                metrics = results[app][config][sm_sets]
                if metrics['status'] == 'PASSED':
                    total_access = metrics.get('dcache_reads', 0) + metrics.get('dcache_writes', 0)
                    values.append(total_access)
                    valid_x.append(j)
        
        if values:
            ax.plot(valid_x, values, marker=markers[i % len(markers)], 
                   label=config, color=colors[i], linewidth=2, markersize=8)
            
            # Add value labels
            for xpos, val in zip(valid_x, values):
                if val > 0:
                    label = f'{val/1000:.1f}K'
                    ax.annotate(label,
                               xy=(xpos, val),
                               xytext=(0, 8),
                               textcoords="offset points",
                               ha='center', va='bottom', fontsize=8)
    
    ax.set_xlabel('Cache Configuration')
    ax.set_ylabel('Total L1 Accesses (reads + writes)')
    ax.set_title(f'L1 Cache Total Accesses - {app.upper()} (RTL Simulation)')
    ax.set_xticks(x)
    ax.set_xticklabels([SM_SETS_LABELS.get(s, s) for s in SM_SETS_LIST], fontsize=8)
    ax.legend(title='Config', loc='best')
    ax.grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150, bbox_inches='tight')
    plt.close()
    print(f"Saved: {filename}")


def plot_l1_misses(results, app, filename):
    """Plot L1 cache total misses (read misses + write misses) as line chart."""
    configs = sorted([c for c in results[app].keys() if c in CONFIGS_FILTER])
    if not configs:
        return
    
    n_configs = len(configs)
    n_sm_sets = len(SM_SETS_LIST)
    
    fig, ax = plt.subplots(figsize=(10, 5))
    
    x = np.arange(n_sm_sets)
    markers = ['o', 's', '^', 'D', 'v', '<', '>', 'p']
    colors = plt.cm.tab10(np.linspace(0, 1, max(n_configs, 2)))
    
    for i, config in enumerate(configs):
        values = []
        valid_x = []
        for j, sm_sets in enumerate(SM_SETS_LIST):
            if sm_sets in results[app][config]:
                metrics = results[app][config][sm_sets]
                if metrics['status'] == 'PASSED':
                    total_misses = metrics.get('dcache_read_misses', 0) + metrics.get('dcache_write_misses', 0)
                    values.append(total_misses)
                    valid_x.append(j)
        
        if values:
            ax.plot(valid_x, values, marker=markers[i % len(markers)], 
                   label=config, color=colors[i], linewidth=2, markersize=8)
            
            # Add value labels
            for xpos, val in zip(valid_x, values):
                if val > 0:
                    label = f'{val/1000:.1f}K'
                    ax.annotate(label,
                               xy=(xpos, val),
                               xytext=(0, 8),
                               textcoords="offset points",
                               ha='center', va='bottom', fontsize=8)
    
    ax.set_xlabel('Cache Configuration')
    ax.set_ylabel('Total L1 Misses (read + write)')
    ax.set_title(f'L1 Cache Total Misses - {app.upper()} (RTL Simulation)')
    ax.set_xticks(x)
    ax.set_xticklabels([SM_SETS_LABELS.get(s, s) for s in SM_SETS_LIST], fontsize=8)
    ax.legend(title='Config', loc='best')
    ax.grid(True, alpha=0.3)
    
    plt.tight_layout()
    plt.savefig(os.path.join(OUTPUT_DIR, filename), dpi=150, bbox_inches='tight')
    plt.close()
    print(f"Saved: {filename}")


def print_summary(results):
    """Print a summary of collected results."""
    print("\n" + "="*60)
    print("RTL SIMULATION RESULTS SUMMARY")
    print("="*60)
    
    for app in sorted(results.keys()):
        print(f"\n{app.upper()}:")
        for config in sorted(results[app].keys()):
            print(f"  {config}:")
            for sm_sets in SM_SETS_LIST:
                if sm_sets in results[app][config]:
                    m = results[app][config][sm_sets]
                    status = m['status']
                    if status == 'PASSED':
                        print(f"    {sm_sets:>10}: cycles={m['cycles']:>8}, IPC={m['ipc']:.3f}, "
                              f"read_hit={m['dcache_read_hit_ratio']:.0f}%, "
                              f"write_hit={m['dcache_write_hit_ratio']:.0f}%")
                    else:
                        print(f"    {sm_sets:>10}: FAILED")
                else:
                    print(f"    {sm_sets:>10}: (no data)")


def main():
    # Create output directory
    os.makedirs(OUTPUT_DIR, exist_ok=True)
    
    print("Collecting RTL simulation results...")
    results = collect_all_results()
    
    if not results:
        print("No results found!")
        return
    
    apps = list(results.keys())
    print(f"Found apps: {apps}")
    
    for app in apps:
        configs = list(results[app].keys())
        print(f"  {app}: configs = {configs}")
        
        # 1. Cycles
        plot_metric(results, app, 'cycles', 'Cycles', 'Execution Cycles',
                   f'{app}_cycles.png', higher_is_better=False)
        
        # 2. IPC
        plot_metric(results, app, 'ipc', 'IPC', 'Instructions Per Cycle',
                   f'{app}_ipc.png', higher_is_better=True)
        
        # 3. L1 Hit Ratio (combined read and write)
        plot_combined_hit_ratio(results, app, f'{app}_l1_hit_ratio.png')
        
        # 4. L1 Access (total reads + writes)
        plot_l1_access(results, app, f'{app}_l1_access.png')
        
        # 5. L1 Misses (read + write misses, as proxy for miss penalty)
        plot_l1_misses(results, app, f'{app}_l1_misses.png')
        
        # 6. DRAM Access (memory requests)
        plot_metric(results, app, 'memory_requests', 'DRAM Requests', 'DRAM Access Count',
                   f'{app}_dram_access.png', higher_is_better=False)
        
        # 7. Memory Latency
        plot_metric(results, app, 'memory_latency', 'Latency (cycles)', 'Memory Latency',
                   f'{app}_memory_latency.png', higher_is_better=False)
    
    # Print summary
    print_summary(results)
    
    print(f"\nAll plots saved to: {OUTPUT_DIR}")


if __name__ == "__main__":
    main()
