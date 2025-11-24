import os
import re
import glob
import matplotlib.pyplot as plt

# Directories containing the results
results_dirs = [
    "simx_results_mstress_w4_t4",
    "simx_results_mstress_w4_t8",
    "simx_results_mstress_w8_t4",
    "simx_results_mstress_w8_t8"
]

project_dir = "/home/kejunwu/vortex/project"

def parse_log_file(filepath):
    metrics = {}
    try:
        with open(filepath, 'r') as f:
            content = f.read()
            
            # 1. Cycles & IPC (Global)
            match = re.search(r"PERF: instrs=\d+, cycles=(\d+), IPC=([\d\.]+)", content)
            if match:
                metrics['Cycles'] = int(match.group(1))
                metrics['IPC'] = float(match.group(2))
            
            # Initialize accumulators
            total_l1_accesses = 0
            total_l1_misses = 0
            total_bank_stalls = 0
            total_mshr_stalls = 0
            
            # Iterate over all cores (assuming up to 64 cores to be safe, though we use 4)
            # Regex to find per-core stats
            # PERF: core0: dcache reads=262956
            # PERF: core0: dcache writes=17392
            # PERF: core0: dcache read misses=73724 (hit ratio=71%)
            # PERF: core0: dcache write misses=17364 (hit ratio=0%)
            # PERF: core0: dcache bank stalls=0 (utilization=100%)
            # PERF: core0: dcache mshr stalls=1 (utilization=99%)
            
            core_reads = re.findall(r"PERF: core\d+: dcache reads=(\d+)", content)
            core_writes = re.findall(r"PERF: core\d+: dcache writes=(\d+)", content)
            core_read_misses = re.findall(r"PERF: core\d+: dcache read misses=(\d+)", content)
            core_write_misses = re.findall(r"PERF: core\d+: dcache write misses=(\d+)", content)
            core_bank_stalls = re.findall(r"PERF: core\d+: dcache bank stalls=(\d+)", content)
            core_mshr_stalls = re.findall(r"PERF: core\d+: dcache mshr stalls=(\d+)", content)
            
            # Sum up metrics across all found cores
            for i in range(len(core_reads)):
                reads = int(core_reads[i])
                writes = int(core_writes[i])
                r_misses = int(core_read_misses[i])
                w_misses = int(core_write_misses[i])
                
                total_l1_accesses += (reads + writes)
                total_l1_misses += (r_misses + w_misses)
                
                if i < len(core_bank_stalls):
                    total_bank_stalls += int(core_bank_stalls[i])
                if i < len(core_mshr_stalls):
                    total_mshr_stalls += int(core_mshr_stalls[i])

            metrics['L1Accesses'] = total_l1_accesses
            metrics['BankConflicts'] = total_bank_stalls
            metrics['StallCycles'] = total_mshr_stalls
            
            # Calculate Global Hit Ratio
            if total_l1_accesses > 0:
                metrics['HitRatio'] = int(((total_l1_accesses - total_l1_misses) / total_l1_accesses) * 100)
            else:
                metrics['HitRatio'] = 0

            # 6. DRAM Accesses (Global)
            match = re.search(r"PERF: memory requests=(\d+)", content)
            if match:
                metrics['DramAccesses'] = int(match.group(1))

            # 7. Miss Penalty (Global)
            match = re.search(r"PERF: memory latency=(\d+)", content)
            if match:
                metrics['MissPenalty'] = int(match.group(1))

    except Exception as e:
        print(f"Error parsing {filepath}: {e}")
        return None
    
    if 'Cycles' not in metrics:
        return None
        
    return metrics

def read_data(dirname):
    full_dir_path = os.path.join(project_dir, dirname)
    data_points = []
    baseline = None
    
    # Find all run_*.log files
    log_files = glob.glob(os.path.join(full_dir_path, "run_*.log"))
    
    for log_file in log_files:
        filename = os.path.basename(log_file)
        # Extract percent from filename: run_100.log or run_Baseline.log
        match = re.match(r"run_(.+)\.log", filename)
        if not match:
            continue
            
        key = match.group(1)
        metrics = parse_log_file(log_file)
        
        if not metrics:
            continue
            
        if key == "Baseline":
            baseline = metrics
        else:
            try:
                percent = int(key)
                metrics['Percent'] = percent
                data_points.append(metrics)
            except ValueError:
                continue # Skip if key is not an integer and not Baseline
                
    # Sort data by percent
    data_points.sort(key=lambda x: x['Percent'])
    return baseline, data_points

def plot_results():
    plots_dir = os.path.join(project_dir, "plots_mstress")
    if not os.path.exists(plots_dir):
        os.makedirs(plots_dir)

    metrics_config = [
        ('Cycles', 'Cycles', 'lower right'),
        ('IPC', 'IPC', 'lower right'),
        ('HitRatio', 'L1 Hit Ratio (%)', 'lower right'),
        ('MissPenalty', 'Miss Penalty (Cycles)', 'upper right'),
        ('L1Accesses', 'L1 Accesses (Total)', 'upper right'),
        ('DramAccesses', 'DRAM Accesses', 'upper right'),
        ('BankConflicts', 'Bank Conflicts (L1 Stalls)', 'upper right'),
        ('StallCycles', 'Stall Cycles (L1 MSHR)', 'upper right')
    ]
    
    colors = ['b', 'g', 'r', 'c']
    
    # Pre-load data to avoid reading files multiple times
    all_data = []
    for dirname in results_dirs:
        baseline, data = read_data(dirname)
        all_data.append((dirname, baseline, data))

    # Generate plots for each configuration separately
    for dirname, baseline, data in all_data:
        if not data:
            continue
            
        # Extract config name: simx_results_mstress_w4_t4 -> mstress_w4_t4
        config_name = dirname.replace("simx_results_", "")
        
        for metric_key, ylabel, legend_loc in metrics_config:
            plt.figure(figsize=(10, 6))
            
            x = [d['Percent'] for d in data]
            y = [d.get(metric_key, 0) for d in data]
            
            # Use a consistent color for the main line
            plt.plot(x, y, marker='o', label=f"{config_name}", color='b')
            
            if baseline and metric_key in baseline:
                plt.axhline(y=baseline[metric_key], linestyle='--', color='r', alpha=0.5, label=f"Baseline")

            plt.title(f"{ylabel} vs Unified Cache % ({config_name})")
            plt.xlabel("Cache Percentage (%)")
            plt.ylabel(ylabel)
            plt.grid(True)
            plt.legend(loc=legend_loc)
            
            # Filename includes kernel and config (e.g., mstress_w4_t4_IPC.png)
            output_path = os.path.join(plots_dir, f"{config_name}_{metric_key}.png")
            plt.savefig(output_path)
            plt.close()
            print(f"Saved plot to: {output_path}")

if __name__ == "__main__":
    plot_results()
