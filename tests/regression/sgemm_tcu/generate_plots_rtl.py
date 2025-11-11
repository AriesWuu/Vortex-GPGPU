#!/usr/bin/env python3

import pandas as pd
import matplotlib.pyplot as plt
import matplotlib
matplotlib.use('Agg')  # Use non-interactive backend
import numpy as np
import os

# Check if results file exists
if not os.path.exists('results_rtl/benchmark_results.csv'):
    print("ERROR: benchmark_results.csv not found!")
    print("Please run run_benchmark_rtl.py first.")
    exit(1)

# Read the CSV file
df = pd.read_csv('results_rtl/benchmark_results.csv')

# Do NOT drop failed runs; convert numeric fields and keep NaNs so TF32 still appears in plots
df['Instructions'] = pd.to_numeric(df['Instructions'], errors='coerce')
df['Cycles'] = pd.to_numeric(df['Cycles'], errors='coerce')
df['IPC'] = pd.to_numeric(df['IPC'], errors='coerce')

# Create configuration labels
df['Config'] = df['Warps'].astype(str) + 'W-' + df['Threads'].astype(str) + 'T'

# Set up the plot style
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
fig1.suptitle('RTL Instructions Count Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    if len(data) > 0:
        # Ensure data is sorted by config order
        data = data.set_index('Config').reindex(configs_unique).reset_index()

        # Plot bars, using 0 for NaN heights so TF32 appears even if FAILED
        values = data['Instructions'].fillna(0)
        bars = ax1.bar(x + i*width, values, width,
                       label=dtype.upper(), color=colors[dtype], alpha=0.8)

        # Add hatching/greying for FAILED (NaN) and annotate
        y_max_inst = np.nanmax(df['Instructions'].values) if np.isfinite(np.nanmax(df['Instructions'].values)) else 1.0
        for j, (bar, is_failed, val) in enumerate(zip(bars.patches, data['Instructions'].isna(), values)):
            if is_failed:
                bar.set_hatch('//')
                bar.set_color('#bdbdbd')
                ax1.text(bar.get_x() + bar.get_width()/2, max(0.02 * y_max_inst, 1.0),
                         'FAILED', ha='center', va='bottom', fontsize=8, rotation=0, color='#555555')
            else:
                ax1.text(bar.get_x() + bar.get_width()/2, val + max(0.02 * y_max_inst, val * 0.03),
                         f"{int(val):,}", ha='center', va='bottom', fontsize=8, rotation=0)

ax1.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax1.set_ylabel('Total Instructions', fontsize=13)
ax1.set_xticks(x + width)
ax1.set_xticklabels(configs_unique, rotation=45, ha='right')
ax1.legend(fontsize=12, loc='upper left')
ax1.grid(True, alpha=0.3, axis='y')
ax1.set_ylim(0, (np.nanmax(df['Instructions'].values) if np.isfinite(np.nanmax(df['Instructions'].values)) else 1.0) * 1.15)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results_rtl/instructions_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results_rtl/instructions_comparison.png")

# ========== Plot 2: Cycles (Bar Chart) ==========
fig2, ax2 = plt.subplots(figsize=(14, 8))
fig2.suptitle('RTL Execution Cycles Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    if len(data) > 0:
        # Ensure data is sorted by config order
        data = data.set_index('Config').reindex(configs_unique).reset_index()

        values = data['Cycles'].fillna(0)
        bars = ax2.bar(x + i*width, values, width,
                       label=dtype.upper(), color=colors[dtype], alpha=0.8)

        y_max_cyc = np.nanmax(df['Cycles'].values) if np.isfinite(np.nanmax(df['Cycles'].values)) else 1.0
        for j, (bar, is_failed, val) in enumerate(zip(bars.patches, data['Cycles'].isna(), values)):
            if is_failed:
                bar.set_hatch('//')
                bar.set_color('#bdbdbd')
                ax2.text(bar.get_x() + bar.get_width()/2, max(0.02 * y_max_cyc, 1.0),
                         'FAILED', ha='center', va='bottom', fontsize=8, rotation=0, color='#555555')
            else:
                ax2.text(bar.get_x() + bar.get_width()/2, val + max(0.02 * y_max_cyc, val * 0.03),
                         f"{int(val):,}", ha='center', va='bottom', fontsize=8, rotation=0)

ax2.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax2.set_ylabel('Execution Cycles', fontsize=13)
ax2.set_xticks(x + width)
ax2.set_xticklabels(configs_unique, rotation=45, ha='right')
ax2.legend(fontsize=12, loc='upper left')
ax2.grid(True, alpha=0.3, axis='y')
ax2.set_ylim(0, (np.nanmax(df['Cycles'].values) if np.isfinite(np.nanmax(df['Cycles'].values)) else 1.0) * 1.15)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results_rtl/cycles_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results_rtl/cycles_comparison.png")

# ========== Plot 3: IPC (Bar Chart) ==========
fig3, ax3 = plt.subplots(figsize=(14, 8))
fig3.suptitle('RTL IPC Comparison - FP16 vs BF16 vs TF32 (N=256, 4 Cores)', 
              fontsize=14, fontweight='bold', y=0.98)

for i, dtype in enumerate(['fp16', 'bf16', 'tf32']):
    data = df[df['Format'] == dtype]
    if len(data) > 0:
        # Ensure data is sorted by config order
        data = data.set_index('Config').reindex(configs_unique).reset_index()

        values = data['IPC'].fillna(0)
        bars = ax3.bar(x + i*width, values, width,
                       label=dtype.upper(), color=colors[dtype], alpha=0.8)

        y_max_ipc = np.nanmax(df['IPC'].values) if np.isfinite(np.nanmax(df['IPC'].values)) else 1.0
        for j, (bar, is_failed, val, raw_val) in enumerate(zip(bars.patches, data['IPC'].isna(), values, data['IPC'])):
            if is_failed:
                bar.set_hatch('//')
                bar.set_color('#bdbdbd')
                ax3.text(bar.get_x() + bar.get_width()/2, max(0.05 * y_max_ipc, 0.1),
                         'FAILED', ha='center', va='bottom', fontsize=8, rotation=0, color='#555555')
            else:
                ax3.text(bar.get_x() + bar.get_width()/2, val + max(0.03 * y_max_ipc, 0.08),
                         f"{float(raw_val):.3f}", ha='center', va='bottom', fontsize=8, rotation=0)

ax3.set_xlabel('Configuration (Warps-Threads)', fontsize=13)
ax3.set_ylabel('IPC (Instructions Per Cycle)', fontsize=13)
ax3.set_xticks(x + width)
ax3.set_xticklabels(configs_unique, rotation=45, ha='right')
ax3.legend(fontsize=12, loc='upper left')
ax3.grid(True, alpha=0.3, axis='y')
ax3.set_ylim(0, (np.nanmax(df['IPC'].values) if np.isfinite(np.nanmax(df['IPC'].values)) else 1.0) * 1.2)

plt.tight_layout(rect=[0, 0, 1, 0.96])
plt.savefig('results_rtl/ipc_comparison.png', dpi=300, bbox_inches='tight')
plt.close()
print("✓ Generated: results_rtl/ipc_comparison.png")

# Generate summary statistics table
print("\n" + "=" * 80)
print("RTL BENCHMARK SUMMARY")
print("=" * 80)
print("\nResults by Format and Configuration:")
print(df[['Format', 'Config', 'Instructions', 'Cycles', 'IPC', 'Runtime']].to_string(index=False))

print("\n" + "-" * 80)
print("Average Performance by Format:")
print("-" * 80)
summary = df.groupby('Format').agg({
    'Instructions': ['mean', 'std'],
    'Cycles': ['mean', 'std'],
    'IPC': ['mean', 'std']
}).round(2)
print(summary)

print("\n" + "-" * 80)
print("Observations:")
print("-" * 80)

# Calculate performance differences
formats_present = df['Format'].unique()

if 'fp16' in formats_present:
    fp16_avg_instrs = df[df['Format'] == 'fp16']['Instructions'].mean()
    fp16_avg_cycles = df[df['Format'] == 'fp16']['Cycles'].mean()
    fp16_avg_ipc = df[df['Format'] == 'fp16']['IPC'].mean()
    
    print(f"1. FP16 average performance:")
    print(f"   - Instructions: {fp16_avg_instrs:.0f}")
    print(f"   - Cycles: {fp16_avg_cycles:.0f}")
    print(f"   - IPC: {fp16_avg_ipc:.6f}")

if 'bf16' in formats_present:
    bf16_avg_instrs = df[df['Format'] == 'bf16']['Instructions'].mean()
    bf16_avg_cycles = df[df['Format'] == 'bf16']['Cycles'].mean()
    bf16_avg_ipc = df[df['Format'] == 'bf16']['IPC'].mean()
    
    print(f"\n2. BF16 average performance:")
    print(f"   - Instructions: {bf16_avg_instrs:.0f}")
    print(f"   - Cycles: {bf16_avg_cycles:.0f}")
    print(f"   - IPC: {bf16_avg_ipc:.6f}")

if 'tf32' in formats_present:
    tf32_avg_instrs = df[df['Format'] == 'tf32']['Instructions'].mean()
    tf32_avg_cycles = df[df['Format'] == 'tf32']['Cycles'].mean()
    tf32_avg_ipc = df[df['Format'] == 'tf32']['IPC'].mean()
    
    print(f"\n3. TF32 average performance:")
    print(f"   - Instructions: {tf32_avg_instrs:.0f}")
    print(f"   - Cycles: {tf32_avg_cycles:.0f}")
    print(f"   - IPC: {tf32_avg_ipc:.6f}")

# Compare FP16 and BF16
if 'fp16' in formats_present and 'bf16' in formats_present:
    print(f"\n4. FP16 vs BF16 comparison:")
    if abs(fp16_avg_instrs - bf16_avg_instrs) < 0.1:
        print(f"   - Instructions: Identical ({fp16_avg_instrs:.0f})")
    else:
        print(f"   - Instructions: {((bf16_avg_instrs - fp16_avg_instrs) / fp16_avg_instrs * 100):+.2f}%")
    
    if abs(fp16_avg_cycles - bf16_avg_cycles) < 0.1:
        print(f"   - Cycles: Identical ({fp16_avg_cycles:.0f})")
    else:
        print(f"   - Cycles: {((bf16_avg_cycles - fp16_avg_cycles) / fp16_avg_cycles * 100):+.2f}%")
    
    if abs(fp16_avg_ipc - bf16_avg_ipc) < 0.000001:
        print(f"   - IPC: Identical ({fp16_avg_ipc:.6f})")
    else:
        print(f"   - IPC: {((bf16_avg_ipc - fp16_avg_ipc) / fp16_avg_ipc * 100):+.2f}%")

# Compare TF32 with FP16/BF16
if 'tf32' in formats_present and 'fp16' in formats_present:
    print(f"\n5. TF32 vs FP16 comparison:")
    print(f"   - Instructions: {((tf32_avg_instrs - fp16_avg_instrs) / fp16_avg_instrs * 100):+.2f}%")
    print(f"   - Cycles: {((tf32_avg_cycles - fp16_avg_cycles) / fp16_avg_cycles * 100):+.2f}%")
    print(f"   - IPC: {((tf32_avg_ipc - fp16_avg_ipc) / fp16_avg_ipc * 100):+.2f}%")

print(f"\n6. Best configuration for each format:")
for dtype in formats_present:
    data = df[df['Format'] == dtype]
    if len(data) > 0:
        data_valid = data.dropna(subset=['IPC'])
        if len(data_valid) > 0:
            best = data_valid.loc[data_valid['IPC'].idxmax()]
            print(f"   {dtype.upper()}: {best['Config']} (IPC={best['IPC']:.6f})")
        else:
            print(f"   {dtype.upper()}: No successful runs")

print("\n" + "=" * 80)
print("All results saved to: results_rtl/")
print("  - CSV: results_rtl/benchmark_results.csv")
print("  - Plots:")
print("    * results_rtl/instructions_comparison.png")
print("    * results_rtl/cycles_comparison.png")
print("    * results_rtl/ipc_comparison.png")
print("  - Logs: results_rtl/*.log")
print("=" * 80)
