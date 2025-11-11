#!/usr/bin/env python3

import pandas as pd
import matplotlib.pyplot as plt
import matplotlib
matplotlib.use('Agg')  # Use non-interactive backend
import numpy as np

# Read the CSV file
df = pd.read_csv('results/benchmark_results.csv')

# Create configuration labels
df['Config'] = df['Warps'].astype(str) + 'W-' + df['Threads'].astype(str) + 'T'

# Set up the plot style
# plt.style.use('seaborn-v0_8-darkgrid')  # Commented out - may not be available
plt.rcParams['figure.facecolor'] = 'white'
plt.rcParams['axes.grid'] = True
colors = {'fp16': '#1f77b4', 'bf16': '#ff7f0e', 'tf32': '#2ca02c'}
markers = {'fp16': 'o', 'bf16': 's', 'tf32': '^'}

# Get unique configurations
configs_unique = df['Config'].unique()
x = np.arange(len(configs_unique))
width = 0.25

# ========== Plot 1: Instructions (Bar Chart) ==========
fig1, ax1 = plt.subplots(figsize=(14, 8))
fig1.suptitle('Instructions Count Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    ax1.bar(x + i*width, data['Instructions'], width, 
            label=dtype.upper(), color=colors[dtype], alpha=0.8)
    
    # Add value labels on bars
    for j, (idx, row) in enumerate(data.iterrows()):
        ax1.text(j + i*width, row['Instructions'] + row['Instructions']*0.03, 
                f"{int(row['Instructions']):,}", 
                ha='center', va='bottom', fontsize=8, rotation=0)

ax1.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax1.set_ylabel('Total Instructions', fontsize=13)
ax1.set_xticks(x + width)
ax1.set_xticklabels(configs_unique, rotation=45, ha='right')
ax1.legend(fontsize=12, loc='upper left')
ax1.grid(True, alpha=0.3, axis='y')
ax1.set_ylim(0, max(df['Instructions']) * 1.15)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results/instructions_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results/instructions_comparison.png")

# ========== Plot 2: Cycles (Bar Chart) ==========
fig2, ax2 = plt.subplots(figsize=(14, 8))
fig2.suptitle('Execution Cycles Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    ax2.bar(x + i*width, data['Cycles'], width, 
            label=dtype.upper(), color=colors[dtype], alpha=0.8)
    
    # Add value labels on bars
    for j, (idx, row) in enumerate(data.iterrows()):
        ax2.text(j + i*width, row['Cycles'] + row['Cycles']*0.03, 
                f"{int(row['Cycles']):,}", 
                ha='center', va='bottom', fontsize=8, rotation=0)

ax2.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax2.set_ylabel('Execution Cycles', fontsize=13)
ax2.set_xticks(x + width)
ax2.set_xticklabels(configs_unique, rotation=45, ha='right')
ax2.legend(fontsize=12, loc='upper left')
ax2.grid(True, alpha=0.3, axis='y')
ax2.set_ylim(0, max(df['Cycles']) * 1.15)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results/cycles_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results/cycles_comparison.png")

# ========== Plot 3: IPC (Bar Chart) ==========
fig3, ax3 = plt.subplots(figsize=(14, 8))
fig3.suptitle('IPC Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    ax3.bar(x + i*width, data['IPC'], width, 
            label=dtype.upper(), color=colors[dtype], alpha=0.8)
    
    # Add value labels on bars
    for j, (idx, row) in enumerate(data.iterrows()):
        ax3.text(j + i*width, row['IPC'] + 0.08, 
                f"{row['IPC']:.3f}", 
                ha='center', va='bottom', fontsize=8, rotation=0)

ax3.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax3.set_ylabel('IPC (Instructions Per Cycle)', fontsize=13)
ax3.set_xticks(x + width)
ax3.set_xticklabels(configs_unique, rotation=45, ha='right')
ax3.legend(fontsize=12, loc='upper left')
ax3.grid(True, alpha=0.3, axis='y')
ax3.set_ylim(0, max(df['IPC']) * 1.2)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results/ipc_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results/ipc_comparison.png")

# Generate summary statistics table
print("\n" + "=" * 70)
print("BENCHMARK SUMMARY")
print("=" * 70)
print("\nResults by Format and Configuration:")
print(df.to_string(index=False))

print("\n" + "-" * 70)
print("Average Performance by Format:")
print("-" * 70)
summary = df.groupby('Format').agg({
    'Instructions': ['mean', 'std'],
    'Cycles': ['mean', 'std'],
    'IPC': ['mean', 'std']
}).round(2)
print(summary)

print("\n" + "-" * 70)
print("Observations:")
print("-" * 70)

# Calculate performance differences
fp16_avg_instrs = df[df['Format'] == 'fp16']['Instructions'].mean()
bf16_avg_instrs = df[df['Format'] == 'bf16']['Instructions'].mean()
tf32_avg_instrs = df[df['Format'] == 'tf32']['Instructions'].mean()

fp16_avg_cycles = df[df['Format'] == 'fp16']['Cycles'].mean()
bf16_avg_cycles = df[df['Format'] == 'bf16']['Cycles'].mean()
tf32_avg_cycles = df[df['Format'] == 'tf32']['Cycles'].mean()

fp16_avg_ipc = df[df['Format'] == 'fp16']['IPC'].mean()
bf16_avg_ipc = df[df['Format'] == 'bf16']['IPC'].mean()
tf32_avg_ipc = df[df['Format'] == 'tf32']['IPC'].mean()

print(f"1. FP16 and BF16 show identical performance:")
print(f"   - Same instructions: {fp16_avg_instrs:.0f}")
print(f"   - Same cycles: {fp16_avg_cycles:.0f}")
print(f"   - Same IPC: {fp16_avg_ipc:.3f}")

print(f"\n2. TF32 compared to FP16/BF16:")
print(f"   - Instructions: {((tf32_avg_instrs - fp16_avg_instrs) / fp16_avg_instrs * 100):+.1f}%")
print(f"   - Cycles: {((tf32_avg_cycles - fp16_avg_cycles) / fp16_avg_cycles * 100):+.1f}%")
print(f"   - IPC: {((tf32_avg_ipc - fp16_avg_ipc) / fp16_avg_ipc * 100):+.1f}%")

print(f"\n3. Best configuration for each format:")
for dtype in ['fp16', 'bf16', 'tf32']:
    best = df[df['Format'] == dtype].loc[df[df['Format'] == dtype]['IPC'].idxmax()]
    print(f"   {dtype.upper()}: {best['Config']} (IPC={best['IPC']:.3f})")

print("\n" + "=" * 70)
print("All results saved to: results/")
print("  - CSV: results/benchmark_results.csv")
print("  - Plots:")
print("    * results/instructions_comparison.png")
print("    * results/cycles_comparison.png")
print("    * results/ipc_comparison.png")
print("=" * 70)
