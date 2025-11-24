import os
import glob
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
import re

# Configuration
PROJECT_DIR = "/home/kejunwu/vortex/project"
OUTPUT_DIR = os.path.join(PROJECT_DIR, "plots")
os.makedirs(OUTPUT_DIR, exist_ok=True)

def parse_results():
    data = []
    # Find all summary.csv files
    pattern = os.path.join(PROJECT_DIR, "simx_results_*", "summary.csv")
    files = glob.glob(pattern)
    
    print(f"Found {len(files)} summary files.")

    for file_path in files:
        # Extract Kernel and Config from directory name
        # Dir format: simx_results_{KERNEL}_{CONFIG}
        dir_name = os.path.basename(os.path.dirname(file_path))
        
        # Regex to parse: simx_results_(.*)_(w\d+_t\d+)
        match = re.match(r"simx_results_(.*)_(w\d+_t\d+)", dir_name)
        if match:
            kernel = match.group(1)
            config = match.group(2)
        else:
            print(f"Skipping malformed directory name: {dir_name}")
            continue

        try:
            df = pd.read_csv(file_path)
            # Filter for Success only
            df = df[df['Status'] == 'Success']
            
            # Separate Baseline and Sweep data
            baseline_row = df[df['Percent'] == 'Baseline']
            sweep_rows = df[df['Percent'] != 'Baseline'].copy()
            
            # Convert Percent to numeric
            sweep_rows['Percent'] = pd.to_numeric(sweep_rows['Percent'])

            sweep_rows = sweep_rows.sort_values('Percent')

            baseline_cycles = baseline_row['Cycles'].iloc[0] if not baseline_row.empty else None
            baseline_ipc = baseline_row['IPC'].iloc[0] if not baseline_row.empty else None

            data.append({
                'Kernel': kernel,
                'Config': config,
                'SweepData': sweep_rows,
                'BaselineCycles': baseline_cycles,
                'BaselineIPC': baseline_ipc
            })
        except Exception as e:
            print(f"Error processing {file_path}: {e}")

    return data

def plot_kernel(kernel_name, kernel_data):
    # Setup figure with 2 subplots side-by-side
    fig, (ax1, ax2) = plt.subplots(1, 2, figsize=(18, 6))
    
    fig.suptitle(f"Unified Cache Performance Analysis: {kernel_name}", fontsize=16)
    
    # Colors for different configs
    colors = plt.cm.tab10.colors

    if kernel_name == "sgemm2":
        # Plot Cycles
        ax1.set_title("Execution Cycles (Lower is Better)")
        ax1.set_xlabel("Unified Cache Percentage (%)")
        ax1.set_ylabel("Cycles")
        ax1.grid(True, linestyle='--', alpha=0.3)
        
        # Plot IPC
        ax2.set_title("IPC (Higher is Better)")
        ax2.set_xlabel("Unified Cache Percentage (%)")
        ax2.set_ylabel("IPC")
        ax2.grid(True, linestyle='--', alpha=0.3)

        for i, item in enumerate(kernel_data):
            config = item['Config']
            df = item['SweepData']
            # Filter for 80-100 range
            df = df[(df['Percent'] >= 80) & (df['Percent'] <= 100)]
            
            color = colors[i % len(colors)]
            
            ax1.plot(df['Percent'].to_numpy(), df['Cycles'].to_numpy(), marker='o', label=config, color=color)
            ax2.plot(df['Percent'].to_numpy(), df['IPC'].to_numpy(), marker='o', label=config, color=color)

        ax1.legend()
        ax2.legend()
        
        output_path = os.path.join(OUTPUT_DIR, f"{kernel_name}_analysis_line.png")
        plt.tight_layout()
        plt.savefig(output_path)
        print(f"Saved plot to {output_path}")
        plt.close()
        return

    # Collect all unique percentages for X-axis
    all_percents = set()
    for item in kernel_data:
        all_percents.update(item['SweepData']['Percent'].tolist())
    all_percents = sorted(list(all_percents))
    
    # X locations
    x = np.arange(len(all_percents))
    num_configs = len(kernel_data)
    total_width = 0.8
    bar_width = total_width / num_configs
    
    # Plot Cycles
    ax1.set_title("Execution Cycles (Lower is Better)")
    ax1.set_xlabel("Unified Cache Percentage (%)")
    ax1.set_ylabel("Cycles")
    ax1.grid(True, linestyle='--', alpha=0.3, axis='y')
    
    # Plot IPC
    ax2.set_title("IPC (Higher is Better)")
    ax2.set_xlabel("Unified Cache Percentage (%)")
    ax2.set_ylabel("IPC")
    ax2.grid(True, linestyle='--', alpha=0.3, axis='y')

    for i, item in enumerate(kernel_data):
        config = item['Config']
        df = item['SweepData']
        base_cycles = item['BaselineCycles']
        base_ipc = item['BaselineIPC']
        color = colors[i % len(colors)]
        
        # Prepare data aligned with all_percents
        cycles_data = []
        ipc_data = []
        for p in all_percents:
            row = df[df['Percent'] == p]
            if not row.empty:
                cycles_data.append(row['Cycles'].values[0])
                ipc_data.append(row['IPC'].values[0])
            else:
                cycles_data.append(0)
                ipc_data.append(0)
        
        # Calculate bar offset
        offset = (i - (num_configs - 1) / 2) * bar_width
        
        # Plot Bars
        ax1.bar(x + offset, cycles_data, width=bar_width, label=config, color=color, alpha=0.8)
        ax2.bar(x + offset, ipc_data, width=bar_width, label=config, color=color, alpha=0.8)
        
        # Plot Baseline Lines (Dashed)
        if base_cycles is not None:
            ax1.axhline(y=base_cycles, color=color, linestyle='--', alpha=0.5, linewidth=1.5)
        if base_ipc is not None:
            ax2.axhline(y=base_ipc, color=color, linestyle='--', alpha=0.5, linewidth=1.5)

    # Set X ticks
    ax1.set_xticks(x)
    ax1.set_xticklabels(all_percents)
    ax1.legend()
    
    ax2.set_xticks(x)
    ax2.set_xticklabels(all_percents)
    ax2.legend()
    
    output_path = os.path.join(OUTPUT_DIR, f"{kernel_name}_analysis_bar.png")
    plt.tight_layout()
    plt.savefig(output_path)
    print(f"Saved plot to {output_path}")
    plt.close()

def main():
    all_data = parse_results()
    
    # Group by Kernel
    kernels = set(d['Kernel'] for d in all_data)
    
    for kernel in kernels:
        kernel_data = [d for d in all_data if d['Kernel'] == kernel]
        # Sort by config for consistent legend order
        kernel_data.sort(key=lambda x: x['Config'])
        plot_kernel(kernel, kernel_data)

if __name__ == "__main__":
    main()
