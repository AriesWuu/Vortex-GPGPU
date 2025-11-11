#!/bin/bash
# Assignment 6 Step 4: RTL Simulation Performance Comparison
# DOT8 Accelerated vs Baseline SGEMM using Verilator RTL Simulation
# Tests N=256 with 4-core GPU using different warp/thread configurations

set -e  # Exit on error

# ==============================================================================
# CONFIGURATION
# ==============================================================================
N=256
CLUSTERS=1
CORES=4
CONFIGS=("4 4" "4 8" "8 4" "8 8")
DRIVER="rtlsim"  # Use RTL simulator (Verilator)

# Directories
VORTEX_ROOT="${VORTEX_ROOT:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)}"
BLACKBOX_SCRIPT="${VORTEX_ROOT}/ci/blackbox.sh"
RESULTS_DIR="${VORTEX_ROOT}/tests/regression/dot8/results_rtl"

# Application names for blackbox.sh
BASELINE_APP="sgemm"
DOT8_APP="dot8"

# Create output directories
mkdir -p "${RESULTS_DIR}"
mkdir -p "${RESULTS_DIR}/plots"
mkdir -p "${RESULTS_DIR}/logs"

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

# Extract performance metrics from blackbox.sh output log
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

# Check if test passed
check_test_passed() {
    local output_file=$1
    if grep -q "PASSED" "$output_file"; then
        return 0
    else
        return 1
    fi
}

# ==============================================================================
# MAIN SCRIPT
# ==============================================================================

print_header "Assignment 6 - Step 4: RTL Performance Comparison"
echo ""
echo "Configuration:"
echo "  Matrix size: ${N}x${N}"
echo "  GPU clusters: ${CLUSTERS}"
echo "  GPU cores: ${CORES}"
echo "  Driver: ${DRIVER} (Verilator RTL Simulation)"
echo "  Baseline app: ${BASELINE_APP}"
echo "  Accelerated app: ${DOT8_APP}"
echo ""

# Verify blackbox.sh exists
if [ ! -f "${BLACKBOX_SCRIPT}" ]; then
    echo -e "${RED}Error: blackbox.sh not found at ${BLACKBOX_SCRIPT}${NC}"
    exit 1
fi

# Initialize CSV files
DOT8_RESULTS="${RESULTS_DIR}/dot8_results.csv"
BASELINE_RESULTS="${RESULTS_DIR}/baseline_results.csv"
echo "warps,threads,instructions,cycles,ipc" > "${DOT8_RESULTS}"
echo "warps,threads,instructions,cycles,ipc" > "${BASELINE_RESULTS}"

# ==============================================================================
# VERIFY HARDWARE BUILD
# ==============================================================================

print_section "Verifying Hardware RTL Build"

echo -e "${YELLOW}Building hardware configuration...${NC}"
cd "${VORTEX_ROOT}"

# Build hardware configuration
if make -C hw config > "${RESULTS_DIR}/hw_config.log" 2>&1; then
    echo -e "${GREEN}✓ Hardware configuration generated${NC}"
else
    echo -e "${RED}✗ Hardware configuration failed. Check ${RESULTS_DIR}/hw_config.log${NC}"
    exit 1
fi

# Build stub runtime (required for blackbox.sh)
if make -C runtime/stub > "${RESULTS_DIR}/stub_build.log" 2>&1; then
    echo -e "${GREEN}✓ Stub runtime built${NC}"
else
    echo -e "${RED}✗ Stub runtime build failed. Check ${RESULTS_DIR}/stub_build.log${NC}"
    exit 1
fi

# ==============================================================================
# RUN TESTS FOR EACH CONFIGURATION
# ==============================================================================

for config in "${CONFIGS[@]}"; do
    read -r warps threads <<< "$config"
    
    print_section "Testing RTL: W=${warps}, T=${threads}"
    
    # -------------------------------------------------------------------------
    # Run Baseline (sgemm) test with RTL simulation
    # -------------------------------------------------------------------------
    echo -e "${YELLOW}[1/2] Running baseline (sgemm) RTL simulation...${NC}"
    
    BASELINE_LOG="${RESULTS_DIR}/logs/baseline_rtl_w${warps}_t${threads}.log"
    
    echo "Command: ./ci/blackbox.sh --driver=rtlsim --clusters=${CLUSTERS} --cores=${CORES} --warps=${warps} --threads=${threads} --app=sgemm --args=\"-n${N}\""
    
    # Run baseline test using blackbox.sh
    if "${BLACKBOX_SCRIPT}" \
        --driver=rtlsim \
        --clusters=${CLUSTERS} \
        --cores=${CORES} \
        --warps=${warps} \
        --threads=${threads} \
        --app=sgemm \
        --args="-n${N}" \
        > "${BASELINE_LOG}" 2>&1; then
        
        # Check if test passed
        if check_test_passed "${BASELINE_LOG}"; then
            baseline_metrics=$(extract_metrics "${BASELINE_LOG}")
            echo "${warps},${threads},${baseline_metrics}" >> "${BASELINE_RESULTS}"
            echo -e "${GREEN}✓ Baseline RTL test PASSED${NC}"
            
            # Show quick stats
            IFS=',' read -r instrs cycles ipc <<< "$baseline_metrics"
            echo "  Instructions: ${instrs}, Cycles: ${cycles}, IPC: ${ipc}"
        else
            echo -e "${RED}✗ Baseline test FAILED (functional error)${NC}"
            echo "${warps},${threads},0,0,0" >> "${BASELINE_RESULTS}"
        fi
    else
        echo -e "${RED}✗ Baseline RTL simulation failed. Check ${BASELINE_LOG}${NC}"
        echo "${warps},${threads},0,0,0" >> "${BASELINE_RESULTS}"
    fi
    
    # -------------------------------------------------------------------------
    # Run Dot8 test with RTL simulation
    # -------------------------------------------------------------------------
    echo -e "${YELLOW}[2/2] Running dot8 accelerated RTL simulation...${NC}"
    
    DOT8_LOG="${RESULTS_DIR}/logs/dot8_rtl_w${warps}_t${threads}.log"
    
    echo "Command: ./ci/blackbox.sh --driver=rtlsim --clusters=${CLUSTERS} --cores=${CORES} --warps=${warps} --threads=${threads} --app=dot8 --args=\"-n${N}\""
    
    # Run dot8 test using blackbox.sh
    if "${BLACKBOX_SCRIPT}" \
        --driver=rtlsim \
        --clusters=${CLUSTERS} \
        --cores=${CORES} \
        --warps=${warps} \
        --threads=${threads} \
        --app=dot8 \
        --args="-n${N}" \
        > "${DOT8_LOG}" 2>&1; then
        
        # Check if test passed
        if check_test_passed "${DOT8_LOG}"; then
            dot8_metrics=$(extract_metrics "${DOT8_LOG}")
            echo "${warps},${threads},${dot8_metrics}" >> "${DOT8_RESULTS}"
            echo -e "${GREEN}✓ Dot8 RTL test PASSED${NC}"
            
            # Show quick stats
            IFS=',' read -r instrs cycles ipc <<< "$dot8_metrics"
            echo "  Instructions: ${instrs}, Cycles: ${cycles}, IPC: ${ipc}"
        else
            echo -e "${RED}✗ Dot8 test FAILED (functional error)${NC}"
            echo "${warps},${threads},0,0,0" >> "${DOT8_RESULTS}"
        fi
    else
        echo -e "${RED}✗ Dot8 RTL simulation failed. Check ${DOT8_LOG}${NC}"
        echo "${warps},${threads},0,0,0" >> "${DOT8_RESULTS}"
    fi
    
    echo ""
done

# ==============================================================================
# GENERATE COMPARISON REPORT
# ==============================================================================

print_header "Generating RTL Performance Analysis"

# Create Python script for comparison analysis
cat > "${RESULTS_DIR}/generate_rtl_comparison.py" << 'PYTHON_EOF'
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
PYTHON_EOF

chmod +x "${RESULTS_DIR}/generate_rtl_comparison.py"
cd "${RESULTS_DIR}/.."

if python3 "${RESULTS_DIR}/generate_rtl_comparison.py"; then
    echo -e "${GREEN}✓ RTL Analysis complete${NC}"
else
    echo -e "${RED}✗ RTL Analysis failed${NC}"
fi

# ==============================================================================
# GENERATE PLOTS (Optional - requires matplotlib)
# ==============================================================================

echo ""
echo -e "${YELLOW}Generating RTL performance plots...${NC}"

cat > "${RESULTS_DIR}/generate_rtl_plots.py" << 'PYTHON_EOF'
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
    
    # Add value labels with 6 decimal places
    for bars in [bars1, bars2]:
        for bar in bars:
            height = bar.get_height()
            if height > 0:
                ax.text(bar.get_x() + bar.get_width()/2., height,
                       f'{height:.6f}', ha='center', va='bottom', 
                       fontsize=10, fontweight='bold')
    
    plt.tight_layout()
    plt.savefig('results_rtl/plots/rtl_ipc_comparison.png', dpi=300, bbox_inches='tight')
    print(f"  ✓ Saved: results_rtl/plots/rtl_ipc_comparison.png")
    plt.close()
    
    return 0

if __name__ == '__main__':
    sys.exit(main())
PYTHON_EOF

chmod +x "${RESULTS_DIR}/generate_rtl_plots.py"

if python3 "${RESULTS_DIR}/generate_rtl_plots.py"; then
    echo -e "${GREEN}✓ RTL Plots generated successfully${NC}"
else
    echo -e "${YELLOW}⚠ Plot generation skipped (matplotlib not available)${NC}"
fi

# ==============================================================================
# FINAL SUMMARY
# ==============================================================================

print_header "RTL Performance Comparison Complete"

echo ""
echo -e "${GREEN}All RTL tests completed successfully!${NC}"
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
echo "     - plots/rtl_instruction_comparison.png"
echo "     - plots/rtl_cycles_comparison.png"
echo "     - plots/rtl_speedup_comparison.png"
echo "     - plots/rtl_ipc_comparison.png"
echo ""
echo "  📝 Logs:"
echo "     - logs/baseline_rtl_w*_t*.log"
echo "     - logs/dot8_rtl_w*_t*.log"
echo "     - hw_config.log"
echo "     - stub_build.log"
echo ""
echo -e "${BLUE}View the comparison report above or check comparison.csv for details.${NC}"
echo ""
echo -e "${YELLOW}Note: RTL simulation is slower than SimX but provides cycle-accurate results.${NC}"
echo ""
