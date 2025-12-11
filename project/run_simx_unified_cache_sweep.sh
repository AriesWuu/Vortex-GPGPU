#!/bin/bash

# Unified Cache Sweep Test Script for simx
# Tests sgemm and sgemm2 with different sm_sets configurations
# Includes both unified cache mode and separate L1/SM mode (baseline)
# 4 cores, varying warps and threads

# Don't exit on error - continue running even if a test fails
set +e

# Configuration
VORTEX_ROOT="/home/kejunwu/vortex"
VORTEX_BUILD="${VORTEX_ROOT}/build"
OUTPUT_BASE="/home/kejunwu/vortex/project/simx_results"
MATRIX_SIZE=64

# Warp/Thread configurations: (warps, threads)
CONFIGS=(
    # "4 4"
    "4 8"
    "8 4"
    "8 8"
)

# SM sets configurations to test for unified cache mode
# 64 = baseline unified (L1=16KB, SM=16KB, 50/50 split)
# Other values test different partition ratios
SM_SETS_LIST=(0 4 8 16 32 64 96 112)

# Applications to test
# APPS=("sgemm" "sgemm2")
APPS=("sgemm2")

# Create output directory
mkdir -p "${OUTPUT_BASE}"

echo "=========================================="
echo "Unified Cache Sweep Test for simx"
echo "Matrix size: ${MATRIX_SIZE}x${MATRIX_SIZE}"
echo "=========================================="
echo ""
echo "This script tests two modes:"
echo "  1. Separate mode: L1=16KB + SM=16KB (independent, UNIFIEDMEM_ENABLE=0)"
echo "  2. Unified mode:  32KB unified cache with dynamic partitioning"
echo ""

# Function to compile simx with specific configuration
compile_simx() {
    local mode=$1
    local warps=$2
    local threads=$3
    local extra_configs=$4
    
    echo "  Compiling simx for ${mode} mode (warps=${warps}, threads=${threads})..."
    
    cd "${VORTEX_BUILD}"
    
    # Clean and rebuild
    make -C runtime/simx clean > /dev/null 2>&1 || true
    
    local configs="-DNUM_CORES=4 -DNUM_WARPS=${warps} -DNUM_THREADS=${threads} -DPERF_ENABLE ${extra_configs}"
    
    if ! CONFIGS="${configs}" make -C runtime/simx -j$(nproc) > /dev/null 2>&1; then
        echo "    ✗ Compilation failed!"
        return 1
    fi
    
    echo "    ✓ Compilation successful"
    return 0
}

# Function to run a single test
run_test() {
    local app=$1
    local warps=$2
    local threads=$3
    local sm_sets=$4
    local output_dir=$5
    local mode=$6
    
    mkdir -p "${output_dir}"
    
    local log_file="${output_dir}/${app}_s${sm_sets}.log"
    
    echo "  Running ${app} with sm_sets=${sm_sets} (${mode})..."
    
    # Build the command
    # IMPORTANT: Export CONFIGS so blackbox.sh uses the correct configuration for unified mode
    local cmd="CONFIGS=\"-DUNIFIEDMEM_ENABLE -DDCACHE_SIZE=32768\" ./ci/blackbox.sh --driver=simx --app=${app} --cores=4 --warps=${warps} --threads=${threads} --args=\"-n${MATRIX_SIZE} -s${sm_sets}\" --perf=2"
    
    # Run and capture output
    cd "${VORTEX_BUILD}"
    
    echo "Command: ${cmd}" > "${log_file}"
    echo "Date: $(date)" >> "${log_file}"
    echo "Mode: ${mode}" >> "${log_file}"
    echo "Configuration: cores=4, warps=${warps}, threads=${threads}, sm_sets=${sm_sets}" >> "${log_file}"
    echo "========================================" >> "${log_file}"
    echo "" >> "${log_file}"
    
    # Execute the test
    if eval "${cmd}" >> "${log_file}" 2>&1; then
        echo "    ✓ PASSED"
        echo "STATUS: PASSED" >> "${log_file}"
        return 0
    else
        echo "    ✗ FAILED"
        echo "STATUS: FAILED" >> "${log_file}"
        return 1
    fi
}

# Function to run separate mode tests (baseline)
run_separate_mode_tests() {
    local warps=$1
    local threads=$2
    
    echo ""
    echo "=========================================="
    echo "SEPARATE MODE (Baseline): L1=16KB + SM=16KB"
    echo "warps=${warps}, threads=${threads}"
    echo "=========================================="
    
    # Compile for separate mode
    # UNIFIEDMEM_DISABLE: Disable unified cache (separate L1 and shared memory)
    # DCACHE_SIZE=16384: 16KB L1 data cache
    # LMEM_LOG_SIZE=14: 16KB local memory (2^14 = 16384)
    if ! compile_simx "separate" "${warps}" "${threads}" "-DUNIFIEDMEM_DISABLE -DDCACHE_SIZE=16384"; then
        echo "  Skipping separate mode tests due to compilation failure"
        return 1
    fi
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        mkdir -p "${output_dir}"
        
        echo ""
        echo "Testing ${app} (separate mode, w${warps}_t${threads}):"
        
        # For separate mode, sm_sets doesn't matter (use 0 as marker)
        # The -s parameter will be ignored since unified cache is disabled
        local log_file="${output_dir}/${app}_separate.log"
        
        echo "  Running ${app} in separate mode..."
        
        cd "${VORTEX_BUILD}"
        
        # Use -s0 to indicate no unified cache partitioning
        # IMPORTANT: Export CONFIGS so blackbox.sh uses the correct configuration
        # Use -DUNIFIEDMEM_DISABLE to disable unified cache (UNIFIEDMEM_ENABLE is defined by default)
        local cmd="CONFIGS=\"-DUNIFIEDMEM_DISABLE -DDCACHE_SIZE=16384\" ./ci/blackbox.sh --driver=simx --app=${app} --cores=4 --warps=${warps} --threads=${threads} --args=\"-n${MATRIX_SIZE}\" --perf=2"
        
        echo "Command: ${cmd}" > "${log_file}"
        echo "Date: $(date)" >> "${log_file}"
        echo "Mode: SEPARATE (L1=16KB, SM=16KB independent)" >> "${log_file}"
        echo "Configuration: cores=4, warps=${warps}, threads=${threads}" >> "${log_file}"
        echo "========================================" >> "${log_file}"
        echo "" >> "${log_file}"
        
        if eval "${cmd}" >> "${log_file}" 2>&1; then
            echo "    ✓ PASSED"
            echo "STATUS: PASSED" >> "${log_file}"
        else
            echo "    ✗ FAILED"
            echo "STATUS: FAILED" >> "${log_file}"
        fi
    done
    
    return 0
}

# Function to run unified mode tests
run_unified_mode_tests() {
    local warps=$1
    local threads=$2
    
    echo ""
    echo "=========================================="
    echo "UNIFIED MODE: 32KB unified cache"
    echo "warps=${warps}, threads=${threads}"
    echo "=========================================="
    
    # Compile for unified mode
    # UNIFIEDMEM_ENABLE: Enable unified cache mode
    # DCACHE_SIZE=32768: 32KB unified cache
    if ! compile_simx "unified" "${warps}" "${threads}" "-DUNIFIEDMEM_ENABLE -DDCACHE_SIZE=32768"; then
        echo "  Skipping unified mode tests due to compilation failure"
        return 1
    fi
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        
        echo ""
        echo "Testing ${app} (unified mode, w${warps}_t${threads}):"
        echo "  Output directory: ${output_dir}"
        
        for sm_sets in "${SM_SETS_LIST[@]}"; do
            run_test "${app}" "${warps}" "${threads}" "${sm_sets}" "${output_dir}" "unified"
        done
    done
    
    return 0
}

# Main test loop
for config in "${CONFIGS[@]}"; do
    read -r warps threads <<< "${config}"
    
    echo ""
    echo "######################################################"
    echo "# Configuration: warps=${warps}, threads=${threads}"
    echo "######################################################"
    
    # Run separate mode tests first (baseline)
    run_separate_mode_tests "${warps}" "${threads}"
    
    # Run unified mode tests
    run_unified_mode_tests "${warps}" "${threads}"
done

echo ""
echo "=========================================="
echo "All tests completed!"
echo "Results saved to: ${OUTPUT_BASE}"
echo "=========================================="

# Generate summary
echo ""
echo "Generating summary..."

summary_file="${OUTPUT_BASE}/summary.txt"
{
    echo "Unified Cache Sweep Test Summary"
    echo "Date: $(date)"
    echo "Matrix size: ${MATRIX_SIZE}x${MATRIX_SIZE}"
    echo "========================================"
    echo ""
    echo "Modes tested:"
    echo "  - separate: L1=16KB + SM=16KB (independent, baseline)"
    echo "  - unified:  32KB unified cache with dynamic partitioning"
    echo ""
    echo "SM sets interpretation (unified mode, 128 total sets):"
    echo "  sm_sets=8   -> L1=120 sets (30KB), SM=8 sets (2KB)"
    echo "  sm_sets=16  -> L1=112 sets (28KB), SM=16 sets (4KB)"
    echo "  sm_sets=32  -> L1=96 sets (24KB), SM=32 sets (8KB)"
    echo "  sm_sets=64  -> L1=64 sets (16KB), SM=64 sets (16KB) [50/50 baseline]"
    echo "  sm_sets=96  -> L1=32 sets (8KB), SM=96 sets (24KB)"
    echo "  sm_sets=112 -> L1=16 sets (4KB), SM=112 sets (28KB)"
    echo ""
    echo "========================================"
    echo ""
} > "${summary_file}"

for config in "${CONFIGS[@]}"; do
    read -r warps threads <<< "${config}"
    echo "Configuration: warps=${warps}, threads=${threads}" >> "${summary_file}"
    echo "----------------------------------------" >> "${summary_file}"
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        echo "  ${app}:" >> "${summary_file}"
        
        # Check separate mode result
        log_file="${output_dir}/${app}_separate.log"
        if [ -f "${log_file}" ]; then
            status=$(grep -m1 "STATUS:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
            cycles=$(grep "cycles=" "${log_file}" 2>/dev/null | grep -oP 'cycles=\K[0-9]+' | tail -1 || echo "N/A")
            ipc=$(grep "IPC=" "${log_file}" 2>/dev/null | grep -oP 'IPC=\K[0-9.]+' | tail -1 || echo "N/A")
            printf "    [separate ] status=%-6s cycles=%-10s IPC=%s\n" "${status}" "${cycles}" "${ipc}" >> "${summary_file}"
        else
            echo "    [separate ] log not found" >> "${summary_file}"
        fi
        
        # Check unified mode results
        for sm_sets in "${SM_SETS_LIST[@]}"; do
            log_file="${output_dir}/${app}_s${sm_sets}.log"
            if [ -f "${log_file}" ]; then
                status=$(grep -m1 "STATUS:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
                cycles=$(grep "cycles=" "${log_file}" 2>/dev/null | grep -oP 'cycles=\K[0-9]+' | tail -1 || echo "N/A")
                ipc=$(grep "IPC=" "${log_file}" 2>/dev/null | grep -oP 'IPC=\K[0-9.]+' | tail -1 || echo "N/A")
                printf "    [unified %3d] status=%-6s cycles=%-10s IPC=%s\n" "${sm_sets}" "${status}" "${cycles}" "${ipc}" >> "${summary_file}"
            else
                printf "    [unified %3d] log not found\n" "${sm_sets}" >> "${summary_file}"
            fi
        done
        echo "" >> "${summary_file}"
    done
    echo "" >> "${summary_file}"
done

echo "Summary saved to: ${summary_file}"
echo ""
cat "${summary_file}"
