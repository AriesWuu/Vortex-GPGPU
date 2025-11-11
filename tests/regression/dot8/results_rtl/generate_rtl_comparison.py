#!/usr/bin/env python3
"""
Assignment 6 Step 4: RTL Performance Comparison Analysis
Compares dot8 accelerated vs baseline sgemm using Verilator RTL simulation
"""

import csv
import sys
import os

def read_results(filename):
    """Read performance results from CSV file"""
    results = {}
    if not os.path.exists(filename):
        print(f"Warning: {filename} not found", file=sys.stderr)
        return results
    
    with open(filename, 'r') as f:
        reader = csv.DictReader(f)
        for row in reader:
            key = (row['warps'], row['threads'])
            results[key] = {
                'instructions': int(row['instructions']) if row['instructions'] != '0' else 0,
                'cycles': int(row['cycles']) if row['cycles'] != '0' else 0,
                'ipc': float(row['ipc']) if row.get('ipc', '0') != '0' else 0
            }
    return results

def main():
    baseline = read_results('results_rtl/baseline_results.csv')
    dot8 = read_results('results_rtl/dot8_results.csv')
    
    if not baseline or not dot8:
        print("Error: Missing results data", file=sys.stderr)
        return 1
    
    # Generate comparison CSV
    with open('results_rtl/comparison.csv', 'w', newline='') as f:
        writer = csv.writer(f)
        writer.writerow([
            'Warps', 'Threads',
            'Baseline_Instructions', 'Dot8_Instructions', 'Instr_Reduction_%',
            'Baseline_Cycles', 'Dot8_Cycles', 'Speedup',
            'Baseline_IPC', 'Dot8_IPC'
        ])
        
        for key in sorted(baseline.keys()):
            warps, threads = key
            b = baseline[key]
            d = dot8.get(key, {'instructions': 0, 'cycles': 0, 'ipc': 0})
            
            # Calculate improvements
            if b['instructions'] > 0 and d['instructions'] > 0:
                instr_reduction = ((b['instructions'] - d['instructions']) / b['instructions']) * 100
            else:
                instr_reduction = 0
                
            if b['cycles'] > 0 and d['cycles'] > 0:
                speedup = b['cycles'] / d['cycles']
            else:
                speedup = 0
            
            writer.writerow([
                warps, threads,
                b['instructions'], d['instructions'], f"{instr_reduction:.2f}",
                b['cycles'], d['cycles'], f"{speedup:.2f}",
                f"{b.get('ipc', 0):.3f}", f"{d.get('ipc', 0):.3f}"
            ])
    
    # Print summary table
    print("\n" + "=" * 100)
    print(f"{'RTL SIMULATION PERFORMANCE COMPARISON: Dot8 vs Baseline (N=256, 4-core GPU)':^100}")
    print("=" * 100)
    print(f"{'Config':<12} {'Metric':<18} {'Baseline':<20} {'Dot8':<20} {'Improvement':<20}")
    print("-" * 100)
    
    for key in sorted(baseline.keys()):
        warps, threads = key
        b = baseline[key]
        d = dot8.get(key, {'instructions': 0, 'cycles': 0, 'ipc': 0})
        
        config_str = f"W={warps}, T={threads}"
        print(f"\n{config_str:<12}")
        
        # Instructions
        if b['instructions'] > 0 and d['instructions'] > 0:
            instr_reduction = ((b['instructions'] - d['instructions']) / b['instructions']) * 100
            print(f"{'':12} {'Instructions':<18} {b['instructions']:<20,} {d['instructions']:<20,} {instr_reduction:>6.1f}% reduction")
        else:
            print(f"{'':12} {'Instructions':<18} {'N/A':<20} {'N/A':<20} {'N/A':<20}")
        
        # Cycles
        if b['cycles'] > 0 and d['cycles'] > 0:
            speedup = b['cycles'] / d['cycles']
            print(f"{'':12} {'Cycles':<18} {b['cycles']:<20,} {d['cycles']:<20,} {speedup:>6.2f}x speedup")
        else:
            print(f"{'':12} {'Cycles':<18} {'N/A':<20} {'N/A':<20} {'N/A':<20}")
        
        # IPC
        b_ipc = b.get('ipc', 0)
        d_ipc = d.get('ipc', 0)
        if b_ipc > 0 or d_ipc > 0:
            ipc_change = ((d_ipc - b_ipc) / b_ipc * 100) if b_ipc > 0 else 0
            print(f"{'':12} {'IPC':<18} {b_ipc:<20.3f} {d_ipc:<20.3f} {ipc_change:>+6.1f}% change")
        else:
            print(f"{'':12} {'IPC':<18} {'N/A':<20} {'N/A':<20} {'N/A':<20}")
    
    print("\n" + "=" * 100)
    print(f"\n✓ Detailed RTL results saved to: results_rtl/comparison.csv\n")
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
