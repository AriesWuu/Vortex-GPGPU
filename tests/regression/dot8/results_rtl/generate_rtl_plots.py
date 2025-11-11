#!/usr/bin/env python3
"""
Assignment 6 Step 4: Generate RTL Performance Comparison Plots
Creates bar charts comparing dot8 vs baseline performance for RTL simulation
"""

import csv
import os
import sys

try:
    import matplotlib
    matplotlib.use('Agg')  # Non-interactive backend
    import matplotlib.pyplot as plt
    import numpy as np
except ImportError:
    print("Warning: matplotlib not installed. Skipping plot generation.")
    print("Install with: pip3 install matplotlib")
    sys.exit(0)

def read_results(filename):
    """Read CSV results into parallel arrays"""
    configs = []
    instructions = []
    cycles = []
    ipcs = []
    
    if not os.path.exists(filename):
        print(f"Warning: {filename} not found", file=sys.stderr)
        return configs, instructions, cycles, ipcs
    
    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row in reader:
            configs.append(f"W{row['warps']}-T{row['threads']}")
            instructions.append(int(row['instructions']) if row['instructions'] != '0' else 0)
            cycles.append(int(row['cycles']) if row['cycles'] != '0' else 0)
            ipcs.append(float(row['ipc']) if row.get('ipc', '0') != '0' else 0)
    
    return configs, instructions, cycles, ipcs

def main():
    # Create output directory for plots
    os.makedirs('results_rtl/plots', exist_ok=True)
    
    # Read data
    baseline_configs, baseline_instr, baseline_cycles, baseline_ipcs = \
        read_results('results_rtl/baseline_results.csv')
    dot8_configs, dot8_instr, dot8_cycles, dot8_ipcs = \
        read_results('results_rtl/dot8_results.csv')
    
    if not baseline_configs or not dot8_configs:
        print("Error: No data to plot", file=sys.stderr)
        return 1
    
    # Plot 1: Instruction Count Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    x = np.arange(len(baseline_configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, baseline_instr, width, 
                   label='Baseline SGEMM', color='#FF6B6B', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_instr, width, 
                   label='DOT8 Accelerated', color='#4ECDC4', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Instruction Count (Millions)', fontsize=13, fontweight='bold')
    ax.set_title('RTL Simulation - Instruction Count: Baseline vs DOT8 (N=256, 4-core)', 
                 fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(baseline_configs, fontsize=11)
    ax.legend(fontsize=11, loc='upper right')
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    
    # Format y-axis in millions
    ax.yaxis.set_major_formatter(plt.FuncFormatter(lambda x, p: f'{x/1e6:.1f}M'))
    
    # Add value labels
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height/1e6:.1f}M', ha='center', va='bottom', 
                       fontsize=9, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('results_rtl/plots/rtl_instruction_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results_rtl/plots/rtl_instruction_comparison.png")
    plt.close()
    
    # Plot 2: Execution Cycles Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    
    bars1 = ax.bar(x - width/2, baseline_cycles, width, 
                   label='Baseline SGEMM', color='#FF6B6B', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_cycles, width, 
                   label='DOT8 Accelerated', color='#4ECDC4', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Execution Cycles (Millions)', fontsize=13, fontweight='bold')
    ax.set_title('RTL Simulation - Execution Cycles: Baseline vs DOT8 (N=256, 4-core)', 
                 fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(baseline_configs, fontsize=11)
    ax.legend(fontsize=11, loc='upper right')
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    
    # Format y-axis in millions
    ax.yaxis.set_major_formatter(plt.FuncFormatter(lambda x, p: f'{x/1e6:.1f}M'))
    
    # Add value labels
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height/1e6:.1f}M', ha='center', va='bottom', 
                       fontsize=9, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('results_rtl/plots/rtl_cycles_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results_rtl/plots/rtl_cycles_comparison.png")
    plt.close()
    
    # Plot 3: Speedup Chart
    speedup_instr = [b/d if d > 0 else 0 for b, d in zip(baseline_instr, dot8_instr)]
    speedup_cycles = [b/d if d > 0 else 0 for b, d in zip(baseline_cycles, dot8_cycles)]
    
    fig, ax = plt.subplots(figsize=(12, 7))
    
    bars1 = ax.bar(x - width/2, speedup_instr, width, 
                   label='Instruction Reduction', color='#95E1D3', alpha=0.85)
    bars2 = ax.bar(x + width/2, speedup_cycles, width, 
                   label='Cycle Speedup', color='#F38181', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Speedup Factor', fontsize=13, fontweight='bold')
    ax.set_title('RTL Simulation - Performance Improvement: DOT8 vs Baseline (N=256, 4-core)', 
                 fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(baseline_configs, fontsize=11)
    ax.legend(fontsize=11, loc='upper right')
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    ax.axhline(y=1, color='black', linestyle='--', linewidth=1.5, alpha=0.5)
    
    # Add value labels
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height:.2f}x', ha='center', va='bottom', 
                       fontsize=10, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('results_rtl/plots/rtl_speedup_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results_rtl/plots/rtl_speedup_comparison.png")
    plt.close()
    
    # Plot 4: IPC Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    
    bars1 = ax.bar(x - width/2, baseline_ipcs, width, 
                   label='Baseline SGEMM', color='#FF6B6B', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_ipcs, width, 
                   label='DOT8 Accelerated', color='#4ECDC4', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Instructions Per Cycle (IPC)', fontsize=13, fontweight='bold')
    ax.set_title('RTL Simulation - IPC Comparison: Baseline vs DOT8 (N=256, 4-core)', 
                 fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(baseline_configs, fontsize=11)
    ax.legend(fontsize=11, loc='upper right')
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    
    # Add value labels with 6 decimal places (adjusted font size for readability)
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height:.6f}', ha='center', va='bottom', 
                       fontsize=8, fontweight='bold', rotation=0)
    
    plt.tight_layout()
    plt.savefig('results_rtl/plots/rtl_ipc_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results_rtl/plots/rtl_ipc_comparison.png")
    plt.close()
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
