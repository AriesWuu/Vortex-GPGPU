import matplotlib.pyplot as plt
import re
import os
from matplotlib.lines import Line2D

partitions = [96, 97, 98, 99]
base_dir = "/home/kejunwu/vortex/project/simx_results_sgemm2_w8_t8"

cycles_data = []
ipc_data = []
status_data = []

print("Parsing log files...")

for p in partitions:
    log_file = os.path.join(base_dir, f"run_{p}.log")
    try:
        with open(log_file, 'r') as f:
            content = f.read()
            
            # Extract Cycles and IPC (last occurrence)
            matches = list(re.finditer(r"PERF: instrs=\d+, cycles=(\d+), IPC=([\d\.]+)", content))
            if matches:
                match = matches[-1] # Get the aggregated one at the end
                cycles_data.append(int(match.group(1)))
                ipc_data.append(float(match.group(2)))
            else:
                print(f"Warning: Could not parse metrics from {log_file}")
                cycles_data.append(None)
                ipc_data.append(None)

            # Extract Status
            if "FAILED!" in content:
                status_data.append("Failed")
            elif "PASSED!" in content:
                status_data.append("Success")
            else:
                status_data.append("Unknown")
                
    except FileNotFoundError:
        print(f"Error: File {log_file} not found")
        cycles_data.append(None)
        ipc_data.append(None)
        status_data.append("Missing")

print(f"Data collected:")
for p, c, i, s in zip(partitions, cycles_data, ipc_data, status_data):
    print(f"Partition {p}: Cycles={c}, IPC={i}, Status={s}")

# Filter out None values for plotting
valid_indices = [i for i, x in enumerate(cycles_data) if x is not None]
valid_partitions = [partitions[i] for i in valid_indices]
valid_cycles = [cycles_data[i] for i in valid_indices]
valid_ipc = [ipc_data[i] for i in valid_indices]
valid_status = [status_data[i] for i in valid_indices]

if not valid_partitions:
    print("No valid data to plot.")
    exit(1)

# Plotting Cycles
plt.figure(figsize=(10, 6))
plt.plot(valid_partitions, valid_cycles, linestyle='-', color='blue', alpha=0.5)
for i, (p, c, s) in enumerate(zip(valid_partitions, valid_cycles, valid_status)):
    color = 'green' if s == 'Success' else 'red'
    marker = 'o' if s == 'Success' else 'x'
    plt.scatter(p, c, color=color, marker=marker, s=100, zorder=5)
    plt.text(p, c, f"{c}\n({s})", ha='center', va='bottom', fontsize=9)

plt.title('Cycles vs Partition (96-99)')
plt.xlabel('Partition (%)')
plt.ylabel('Cycles')
plt.xticks(partitions)
plt.grid(True)

# Create a custom legend for status
legend_elements = [Line2D([0], [0], marker='o', color='w', label='Success',
                          markerfacecolor='green', markersize=10),
                   Line2D([0], [0], marker='x', color='w', label='Failed',
                          markeredgecolor='red', markersize=10)]
plt.legend(handles=legend_elements)

plt.tight_layout()
output_path_cycles = '/home/kejunwu/vortex/project/sgemm2_partition_cycles.png'
plt.savefig(output_path_cycles)
print(f"Cycles plot saved to {output_path_cycles}")
plt.close()

# Plotting IPC
plt.figure(figsize=(10, 6))
plt.plot(valid_partitions, valid_ipc, linestyle='-', color='orange', alpha=0.5)
for i, (p, ipc, s) in enumerate(zip(valid_partitions, valid_ipc, valid_status)):
    color = 'green' if s == 'Success' else 'red'
    marker = 'o' if s == 'Success' else 'x'
    plt.scatter(p, ipc, color=color, marker=marker, s=100, zorder=5)
    plt.text(p, ipc, f"{ipc:.2f}", ha='center', va='bottom', fontsize=9)

plt.title('IPC vs Partition (96-99)')
plt.xlabel('Partition (%)')
plt.ylabel('IPC')
plt.xticks(partitions)
plt.grid(True)
plt.legend(handles=legend_elements)

plt.tight_layout()
output_path_ipc = '/home/kejunwu/vortex/project/sgemm2_partition_ipc.png'
plt.savefig(output_path_ipc)
print(f"IPC plot saved to {output_path_ipc}")
plt.close()
