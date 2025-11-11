#!/bin/bash
# Assignment 5 Step 4: Dot8 vs Baseline Performance Comparison
# Tests N=256 with 4-core GPU using different warp/thread configurations
# Compares dot8-accelerated matrix multiplication vs baseline int8 sgemm

set -e  # Exit on error

# ==============================================================================
# CONFIGURATION
# ==============================================================================
N=256
CLUSTERS=1
CORES=4
CONFIGS=("4 4" "4 8" "8 4" "8 8")

# Directories
VORTEX_ROOT="${VORTEX_ROOT:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)}"
BUILD_DIR="${VORTEX_ROOT}/build"
BASELINE_DIR="${BUILD_DIR}/tests/regression/sgemm"
DOT8_DIR="${BUILD_DIR}/tests/regression/dot8"
RESULTS_DIR="${VORTEX_ROOT}/tests/regression/dot8/results"

# Create output directories
mkdir -p "${RESULTS_DIR}"
mkdir -p "${RESULTS_DIR}/plots"

# Colors for output
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

# ==============================================================================
# HELPER FUNCTIONS
# ==============================================================================

print_header() {
    echo -e "${BLUE}========================================${NC}"
    echo -e "${BLUE}$1${NC}"
    echo -e "${BLUE}========================================${NC}"
}

print_section() {
    echo ""
    echo -e "${BLUE}----------------------------------------${NC}"
    echo -e "${BLUE}$1${NC}"
    echo -e "${BLUE}----------------------------------------${NC}"
}

# Extract performance metrics from simulator output
extract_metrics() {
    local output_file=$1
    
    # Look for aggregate PERF line (last one, summed across all cores)
    local instructions=$(grep "PERF:" "$output_file" | grep "instrs=" | tail -1 | sed -n 's/.*instrs=\([0-9]*\).*/\1/p')
    local cycles=$(grep "PERF:" "$output_file" | grep "cycles=" | tail -1 | sed -n 's/.*cycles=\([0-9]*\).*/\1/p')
    
    # Calculate IPC
    local ipc=0
    if [ -n "$cycles" ] && [ "$cycles" -gt 0 ] 2>/dev/null; then
        ipc=$(awk "BEGIN {printf \"%.6f\", ${instructions:-0}/${cycles}}")
    fi
    
    echo "${instructions:-0},${cycles:-0},${ipc}"
}

# ==============================================================================
# MAIN SCRIPT
# ==============================================================================

print_header "Assignment 5 - Step 4: Performance Comparison"
echo ""
echo "Configuration:"
echo "  Matrix size: ${N}x${N}"
echo "  GPU clusters: ${CLUSTERS}"
echo "  GPU cores: ${CORES}"
echo "  Baseline: ${BASELINE_DIR}"
echo "  Dot8: ${DOT8_DIR}"
echo ""

# Initialize CSV files
DOT8_RESULTS="${RESULTS_DIR}/dot8_results.csv"
BASELINE_RESULTS="${RESULTS_DIR}/baseline_results.csv"
echo "warps,threads,instructions,cycles,ipc" > "${DOT8_RESULTS}"
echo "warps,threads,instructions,cycles,ipc" > "${BASELINE_RESULTS}"

# Verify Vortex is configured
if [ ! -f "${VORTEX_ROOT}/config.mk" ]; then
    echo -e "${RED}Error: config.mk not found in ${VORTEX_ROOT}${NC}"
    echo "Please run 'configure' first from Vortex root"
    exit 1
fi

# Check if SimX runtime exists, build if needed
print_section "Verifying Vortex Build"
if [ ! -f "${VORTEX_ROOT}/build/runtime/libsimx.so" ]; then
    echo -e "${YELLOW}SimX runtime not found, building Vortex...${NC}"
    cd "${VORTEX_ROOT}/build"
    if make -j > "${RESULTS_DIR}/vortex_build.log" 2>&1; then
        echo -e "${GREEN}✓ Vortex built successfully${NC}"
    else
        echo -e "${RED}✗ Vortex build failed. Check ${RESULTS_DIR}/vortex_build.log${NC}"
        echo ""
        echo "Common fixes:"
        echo "  1. Check build log for specific errors"
        echo "  2. Try: cd build && make clean && make"
        echo "  3. If missing dependencies, run: ./ci/toolchain_install.sh"
        exit 1
    fi
else
    echo -e "${GREEN}✓ SimX runtime found${NC}"
fi

# ==============================================================================
# RUN TESTS FOR EACH CONFIGURATION
# ==============================================================================

for config in "${CONFIGS[@]}"; do
    read -r warps threads <<< "$config"
    
    print_section "Testing: W=${warps}, T=${threads}"
    
    # -------------------------------------------------------------------------
    # Rebuild SimX with new hardware configuration
    # -------------------------------------------------------------------------
    echo -e "${YELLOW}[1/3] Rebuilding SimX for W=${warps}, T=${threads}...${NC}"
    
    cd "${BUILD_DIR}/runtime/simx"
    REBUILD_LOG="${RESULTS_DIR}/rebuild_w${warps}_t${threads}.log"
    
    # Clean and rebuild with new configuration
    if make clean > "${REBUILD_LOG}" 2>&1 && \
       CONFIGS="-DNUM_CLUSTERS=${CLUSTERS} -DNUM_CORES=${CORES} -DNUM_WARPS=${warps} -DNUM_THREADS=${threads}" \
       make -j >> "${REBUILD_LOG}" 2>&1; then
        echo -e "${GREEN}✓ SimX rebuilt successfully${NC}"
    else
        echo -e "${RED}✗ SimX rebuild failed. Check ${REBUILD_LOG}${NC}"
        echo "${warps},${threads},0,0,0" >> "${BASELINE_RESULTS}"
        echo "${warps},${threads},0,0,0" >> "${DOT8_RESULTS}"
        continue
    fi
    
    # -------------------------------------------------------------------------
    # Run Baseline (sgemm) test
    # -------------------------------------------------------------------------
    echo -e "${YELLOW}[2/3] Running baseline (sgemm)...${NC}"
    
    cd "${BASELINE_DIR}"
    BASELINE_LOG="${RESULTS_DIR}/baseline_w${warps}_t${threads}.log"
    
    # Clean and rebuild kernel
    make clean-kernel > /dev/null 2>&1
    
    # Build and run with current hardware configuration
    if make kernel.vxbin >> "${BASELINE_LOG}" 2>&1 && \
       make run-simx OPTS="-n${N}" >> "${BASELINE_LOG}" 2>&1; then
        baseline_metrics=$(extract_metrics "${BASELINE_LOG}")
        echo "${warps},${threads},${baseline_metrics}" >> "${BASELINE_RESULTS}"
        echo -e "${GREEN}✓ Baseline completed${NC}"
        
        # Show quick stats
        IFS=',' read -r instrs cycles ipc <<< "$baseline_metrics"
        echo "  Instructions: ${instrs}, Cycles: ${cycles}, IPC: ${ipc}"
    else
        echo -e "${RED}✗ Baseline failed. Check ${BASELINE_LOG}${NC}"
        echo "${warps},${threads},0,0,0" >> "${BASELINE_RESULTS}"
    fi
    
    # -------------------------------------------------------------------------
    # Run Dot8 test
    # -------------------------------------------------------------------------
    echo -e "${YELLOW}[3/3] Running dot8 accelerated version...${NC}"
    
    cd "${DOT8_DIR}"
    DOT8_LOG="${RESULTS_DIR}/dot8_w${warps}_t${threads}.log"
    
    # Clean and rebuild kernel
    make clean-kernel > /dev/null 2>&1
    
    # Build and run with current hardware configuration
    if make kernel.vxbin >> "${DOT8_LOG}" 2>&1 && \
       make run-simx OPTS="-n${N}" >> "${DOT8_LOG}" 2>&1; then
        dot8_metrics=$(extract_metrics "${DOT8_LOG}")
        echo "${warps},${threads},${dot8_metrics}" >> "${DOT8_RESULTS}"
        echo -e "${GREEN}✓ Dot8 completed${NC}"
        
        # Show quick stats
        IFS=',' read -r instrs cycles ipc <<< "$dot8_metrics"
        echo "  Instructions: ${instrs}, Cycles: ${cycles}, IPC: ${ipc}"
    else
        echo -e "${RED}✗ Dot8 failed. Check ${DOT8_LOG}${NC}"
        echo "${warps},${threads},0,0,0" >> "${DOT8_RESULTS}"
    fi
    
    echo ""
done

# ==============================================================================
# GENERATE COMPARISON REPORT
# ==============================================================================

print_header "Generating Performance Analysis"

# Create Python script for comparison analysis
cat > "${RESULTS_DIR}/generate_comparison.py" << 'PYTHON_EOF'
#!/usr/bin/env python3
"""
Assignment 5 Step 4: Performance Comparison Analysis
Compares dot8 accelerated vs baseline int8 matrix multiplication
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
    baseline = read_results('results/baseline_results.csv')
    dot8 = read_results('results/dot8_results.csv')
    
    if not baseline or not dot8:
        print("Error: Missing results data", file=sys.stderr)
        return 1
    
    # Generate comparison CSV
    with open('results/comparison.csv', 'w', newline='') as f:
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
    print("\n" + "=" * 95)
    print(f"{'PERFORMANCE COMPARISON: Dot8 vs Baseline (N=256, 4-core GPU)':^95}")
    print("=" * 95)
    print(f"{'Config':<12} {'Metric':<18} {'Baseline':<20} {'Dot8':<20} {'Improvement':<20}")
    print("-" * 95)
    
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
        
        # Cycles
        if b['cycles'] > 0 and d['cycles'] > 0:
            speedup = b['cycles'] / d['cycles']
            print(f"{'':12} {'Cycles':<18} {b['cycles']:<20,} {d['cycles']:<20,} {speedup:>6.2f}x speedup")
        
        # IPC
        b_ipc = b.get('ipc', 0)
        d_ipc = d.get('ipc', 0)
        if b_ipc > 0 or d_ipc > 0:
            ipc_change = ((d_ipc - b_ipc) / b_ipc * 100) if b_ipc > 0 else 0
            print(f"{'':12} {'IPC':<18} {b_ipc:<20.3f} {d_ipc:<20.3f} {ipc_change:>+6.1f}% change")
    
    print("\n" + "=" * 95)
    print(f"\n✓ Detailed results saved to: results/comparison.csv\n")
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
PYTHON_EOF

chmod +x "${RESULTS_DIR}/generate_comparison.py"
cd "${RESULTS_DIR}/.."

if python3 "${RESULTS_DIR}/generate_comparison.py"; then
    echo -e "${GREEN}✓ Analysis complete${NC}"
else
    echo -e "${RED}✗ Analysis failed${NC}"
fi

# ==============================================================================
# GENERATE PLOTS
# ==============================================================================

echo ""
echo -e "${YELLOW}Generating visualization plots...${NC}"

cat > "${RESULTS_DIR}/generate_plots.py" << 'PYTHON_EOF'
#!/usr/bin/env python3
"""
Assignment 5 Step 4: Generate Performance Comparison Plots
Creates bar charts comparing dot8 vs baseline performance
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

def create_comparison_plot(configs, baseline_data, dot8_data, 
                           ylabel, title, filename, 
                           baseline_color='#FF6B6B', dot8_color='#4ECDC4',
                           value_format='{:,}', legend_fontsize=11):
    """Create a side-by-side bar chart comparison"""
    fig, ax = plt.subplots(figsize=(12, 7))
    
    x = np.arange(len(configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, baseline_data, width, 
                   label='Baseline (int8 sgemm)', color=baseline_color, alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_data, width, 
                   label='Dot8 Accelerated', color=dot8_color, alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel(ylabel, fontsize=13, fontweight='bold')
    ax.set_title(title, fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(configs, fontsize=11)
    ax.legend(fontsize=legend_fontsize, loc='upper right')
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    
    # Add value labels on bars
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                label_text = value_format.format(int(height)) if '{:' in value_format else value_format.format(height)
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       label_text, ha='center', va='bottom', 
                       fontsize=9, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig(filename, dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: {filename}")
    plt.close()

def main():
    # Create output directory for plots
    os.makedirs('results/plots', exist_ok=True)
    
    # Read data
    baseline_configs, baseline_instr, baseline_cycles, baseline_ipcs = \
        read_results('results/baseline_results.csv')
    dot8_configs, dot8_instr, dot8_cycles, dot8_ipcs = \
        read_results('results/dot8_results.csv')
    
    if not baseline_configs or not dot8_configs:
        print("Error: No data to plot", file=sys.stderr)
        return 1
    
    # Plot 1: Instruction Count Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    x = np.arange(len(baseline_configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, baseline_instr, width, 
                   label='Baseline (int8 sgemm)', color='#FF6B6B', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_instr, width, 
                   label='Dot8 Accelerated', color='#4ECDC4', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Instruction Count (Millions)', fontsize=13, fontweight='bold')
    ax.set_title('Instruction Count: Baseline vs Dot8 (N=256, 4-core GPU)', 
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
    plt.savefig('results/plots/instruction_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results/plots/instruction_comparison.png")
    plt.close()
    
    # Plot 2: Execution Cycles Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    x = np.arange(len(baseline_configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, baseline_cycles, width, 
                   label='Baseline (int8 sgemm)', color='#FF6B6B', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_cycles, width, 
                   label='Dot8 Accelerated', color='#4ECDC4', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Execution Cycles (Millions)', fontsize=13, fontweight='bold')
    ax.set_title('Execution Cycles: Baseline vs Dot8 (N=256, 4-core GPU)', 
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
    plt.savefig('results/plots/cycles_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results/plots/cycles_comparison.png")
    plt.close()
    
    # Plot 3: Speedup Chart
    speedup_instr = [b/d if d > 0 else 0 for b, d in zip(baseline_instr, dot8_instr)]
    speedup_cycles = [b/d if d > 0 else 0 for b, d in zip(baseline_cycles, dot8_cycles)]
    
    fig, ax = plt.subplots(figsize=(12, 7))
    x = np.arange(len(baseline_configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, speedup_instr, width, 
                   label='Instruction Reduction', color='#95E1D3', alpha=0.85)
    bars2 = ax.bar(x + width/2, speedup_cycles, width, 
                   label='Cycle Speedup', color='#F38181', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Speedup Factor', fontsize=13, fontweight='bold')
    ax.set_title('Performance Improvement: Dot8 vs Baseline (N=256, 4-core GPU)', 
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
    plt.savefig('results/plots/speedup_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results/plots/speedup_comparison.png")
    plt.close()
    
    # Plot 4: IPC Comparison
    fig, ax = plt.subplots(figsize=(12, 7))
    x = np.arange(len(baseline_configs))
    width = 0.35
    
    bars1 = ax.bar(x - width/2, baseline_ipcs, width, 
                   label='Baseline (int8 sgemm)', color='#A8E6CF', alpha=0.85)
    bars2 = ax.bar(x + width/2, dot8_ipcs, width, 
                   label='Dot8 Accelerated', color='#FFD3B6', alpha=0.85)
    
    ax.set_xlabel('Configuration (Warps-Threads)', fontsize=13, fontweight='bold')
    ax.set_ylabel('Instructions Per Cycle (IPC)', fontsize=13, fontweight='bold')
    ax.set_title('IPC Comparison: Baseline vs Dot8 (N=256, 4-core GPU)', 
                 fontsize=14, fontweight='bold', pad=20)
    ax.set_xticks(x)
    ax.set_xticklabels(baseline_configs, fontsize=11)
    ax.legend(fontsize=11, loc='upper left')  # 左上角
    ax.grid(axis='y', alpha=0.3, linestyle='--', linewidth=0.8)
    
    # Add value labels with 6 decimal places
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height:.6f}', ha='center', va='bottom', 
                       fontsize=9, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('results/plots/ipc_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results/plots/ipc_comparison.png")
    plt.close()
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
PYTHON_EOF

chmod +x "${RESULTS_DIR}/generate_plots.py"

if python3 "${RESULTS_DIR}/generate_plots.py"; then
    echo -e "${GREEN}✓ Plots generated successfully${NC}"
else
    echo -e "${YELLOW}⚠ Plot generation skipped (matplotlib not available)${NC}"
fi

# ==============================================================================
# FINAL SUMMARY
# ==============================================================================

print_header "Performance Comparison Complete"

echo ""
echo -e "${GREEN}All tests completed successfully!${NC}"
echo ""
echo "Results directory: ${RESULTS_DIR}"
echo ""
echo "Generated files:"
echo "  📊 CSV Data:"
echo "     - baseline_results.csv"
echo "     - dot8_results.csv"
echo "     - comparison.csv"
echo ""
echo "  📈 Plots (if matplotlib available):"
echo "     - plots/instruction_comparison.png"
echo "     - plots/cycles_comparison.png"
echo "     - plots/speedup_comparison.png"
echo "     - plots/ipc_comparison.png"
echo ""
echo "  📝 Logs:"
echo "     - baseline_w*_t*.log"
echo "     - dot8_w*_t*.log"
echo "     - rebuild_w*_t*.log"
echo ""
echo -e "${BLUE}View the comparison report above or check comparison.csv for details.${NC}"
echo ""
