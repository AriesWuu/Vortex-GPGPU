#!/bin/bash

# Unified Cache Sweep Test Script for rtlsim
# Tests sgemm and sgemm2 with different sm_sets configurations
# Includes both unified cache mode and separate L1/SM mode (baseline)
# 4 cores, varying warps and threads

# Don't exit on error - continue running even if a test fails
set +e

# Configuration
VORTEX_ROOT="/home/kejunwu/vortex"
VORTEX_BUILD="${VORTEX_ROOT}/build"
OUTPUT_BASE="/home/kejunwu/vortex/project/rtlsim_results"
MATRIX_SIZE=64  # Smaller size for rtlsim due to longer simulation time

# Warp/Thread configurations: (warps, threads)
CONFIGS=(
    "4 4"
    # "4 8"
    # "8 4"
    # "8 8"
)

# SM sets configurations to test for unified cache mode
# 64 = baseline unified (L1=16KB, SM=16KB, 50/50 split)
# Other values test different partition ratios
SM_SETS_LIST=(0 8 16 32 64 96 112)

# Applications to test
APPS=("sgemm2")

# Create output directory
mkdir -p "${OUTPUT_BASE}"

echo "=========================================="
echo "Unified Cache Sweep Test for RTLSim"
echo "Matrix size: ${MATRIX_SIZE}x${MATRIX_SIZE}"
echo "=========================================="
echo ""
echo "This script tests two modes:"
echo "  1. Separate mode: L1=16KB + SM=16KB (independent, UNIFIEDMEM_DISABLE)"
echo "  2. Unified mode:  32KB unified cache with dynamic partitioning"
echo ""
echo "NOTE: RTLSim is much slower than SimX. Using smaller matrix size."
echo ""

# Function to clean RTL compilation cache
clean_rtlsim_cache() {
    echo "  Cleaning RTL compilation cache..."
    rm -rf "${VORTEX_BUILD}/runtime/librtlsim.so.obj_dir" 2>/dev/null || true
    rm -rf "${VORTEX_ROOT}/runtime/librtlsim.so.obj_dir" 2>/dev/null || true
    echo "    ✓ Cache cleaned"
}

# Function to compile rtlsim with specific configuration
compile_rtlsim() {
    local mode=$1
    local warps=$2
    local threads=$3
    local extra_configs=$4
    
    echo "  Compiling rtlsim for ${mode} mode (warps=${warps}, threads=${threads})..."
    echo "  Extra configs: ${extra_configs}"
    
    cd "${VORTEX_BUILD}"
    
    # IMPORTANT: Clean RTL compilation cache to avoid configuration mismatch issues
    # This is critical when changing warp/thread/core counts
    clean_rtlsim_cache
    
    # Clean rtlsim
    make -C runtime/rtlsim clean > /dev/null 2>&1 || true
    
    local configs="-DNUM_CORES=4 -DNUM_WARPS=${warps} -DNUM_THREADS=${threads} -DPERF_ENABLE ${extra_configs}"
    
    echo "  Full CONFIGS: ${configs}"
    
    # Rebuild rtlsim with new configuration
    if ! CONFIGS="${configs}" make -C runtime/rtlsim -j$(nproc) 2>&1 | tail -5; then
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
    local extra_configs=$7
    
    mkdir -p "${output_dir}"
    
    local log_file="${output_dir}/${app}_s${sm_sets}.log"
    
    echo "  Running ${app} with sm_sets=${sm_sets} (${mode})..."
    
    cd "${VORTEX_BUILD}"
    
    # Clean and rebuild test application to ensure correct configuration
    echo "    Rebuilding ${app} with correct configuration..."
    local configs="-DNUM_CORES=4 -DNUM_WARPS=${warps} -DNUM_THREADS=${threads} -DPERF_ENABLE ${extra_configs}"
    make -C "tests/regression/${app}" clean > /dev/null 2>&1 || true
    CONFIGS="${configs}" make -C "tests/regression/${app}" -j$(nproc) > /dev/null 2>&1
    
    # Build the command with explicit CONFIGS
    local cmd="CONFIGS=\"${extra_configs}\" ./ci/blackbox.sh --driver=rtlsim --app=${app} --cores=4 --warps=${warps} --threads=${threads} --args=\"-n${MATRIX_SIZE} -s${sm_sets}\" --perf=2"
    
    echo "Command: ${cmd}" > "${log_file}"
    echo "Date: $(date)" >> "${log_file}"
    echo "Mode: ${mode}" >> "${log_file}"
    echo "Configuration: cores=4, warps=${warps}, threads=${threads}, sm_sets=${sm_sets}" >> "${log_file}"
    echo "========================================" >> "${log_file}"
    echo "" >> "${log_file}"
    
    # Execute the test with timeout (rtlsim can be slow)
    local start_time=$(date +%s)
    
    if timeout 3600 bash -c "${cmd}" >> "${log_file}" 2>&1; then
        local end_time=$(date +%s)
        local elapsed=$((end_time - start_time))
        echo "    ✓ PASSED (${elapsed}s)"
        echo "STATUS: PASSED" >> "${log_file}"
        echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
        return 0
    else
        local exit_code=$?
        local end_time=$(date +%s)
        local elapsed=$((end_time - start_time))
        if [ $exit_code -eq 124 ]; then
            echo "    ✗ TIMEOUT after ${elapsed}s"
            echo "STATUS: TIMEOUT" >> "${log_file}"
        else
            echo "    ✗ FAILED (${elapsed}s)"
            echo "STATUS: FAILED" >> "${log_file}"
        fi
        echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
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
    
    # LMEM_ENABLE is required for separate mode to support shared memory
    local extra_configs="-DUNIFIEDMEM_DISABLE -DDCACHE_SIZE=16384 -DLMEM_ENABLE"
    
    # Compile for separate mode
    if ! compile_rtlsim "separate" "${warps}" "${threads}" "${extra_configs}"; then
        echo "  Skipping separate mode tests due to compilation failure"
        return 1
    fi
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        mkdir -p "${output_dir}"
        
        echo ""
        echo "Testing ${app} (separate mode, w${warps}_t${threads}):"
        
        local log_file="${output_dir}/${app}_separate.log"
        
        echo "  Running ${app} in separate mode..."
        
        cd "${VORTEX_BUILD}"
        
        # Clean and rebuild test application to ensure correct configuration
        echo "    Rebuilding ${app} with correct configuration..."
        local configs="-DNUM_CORES=4 -DNUM_WARPS=${warps} -DNUM_THREADS=${threads} -DPERF_ENABLE ${extra_configs}"
        make -C "tests/regression/${app}" clean > /dev/null 2>&1 || true
        CONFIGS="${configs}" make -C "tests/regression/${app}" -j$(nproc) > /dev/null 2>&1
        
        local cmd="CONFIGS=\"${extra_configs}\" ./ci/blackbox.sh --driver=rtlsim --app=${app} --cores=4 --warps=${warps} --threads=${threads} --args=\"-n${MATRIX_SIZE}\" --perf=2"
        
        echo "Command: ${cmd}" > "${log_file}"
        echo "Date: $(date)" >> "${log_file}"
        echo "Mode: SEPARATE (L1=16KB, SM=16KB independent)" >> "${log_file}"
        echo "Configuration: cores=4, warps=${warps}, threads=${threads}" >> "${log_file}"
        echo "========================================" >> "${log_file}"
        echo "" >> "${log_file}"
        
        local start_time=$(date +%s)
        
        if timeout 3600 bash -c "${cmd}" >> "${log_file}" 2>&1; then
            local end_time=$(date +%s)
            local elapsed=$((end_time - start_time))
            echo "    ✓ PASSED (${elapsed}s)"
            echo "STATUS: PASSED" >> "${log_file}"
            echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
        else
            local exit_code=$?
            local end_time=$(date +%s)
            local elapsed=$((end_time - start_time))
            if [ $exit_code -eq 124 ]; then
                echo "    ✗ TIMEOUT after ${elapsed}s"
                echo "STATUS: TIMEOUT" >> "${log_file}"
            else
                echo "    ✗ FAILED (${elapsed}s)"
                echo "STATUS: FAILED" >> "${log_file}"
            fi
            echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
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
    
    local extra_configs="-DUNIFIEDMEM_ENABLE -DDCACHE_SIZE=32768"
    
    # Compile for unified mode
    if ! compile_rtlsim "unified" "${warps}" "${threads}" "${extra_configs}"; then
        echo "  Skipping unified mode tests due to compilation failure"
        return 1
    fi
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        
        echo ""
        echo "Testing ${app} (unified mode, w${warps}_t${threads}):"
        echo "  Output directory: ${output_dir}"
        
        for sm_sets in "${SM_SETS_LIST[@]}"; do
            run_test "${app}" "${warps}" "${threads}" "${sm_sets}" "${output_dir}" "unified" "${extra_configs}"
        done
    done
    
    return 0
}

# Function to run unified mode with bank partition tests
run_unified_bank_partition_tests() {
    local warps=$1
    local threads=$2
    
    echo ""
    echo "=========================================="
    echo "UNIFIED MODE with BANK PARTITION: 32KB, 8 banks (4+4)"
    echo "warps=${warps}, threads=${threads}"
    echo "=========================================="
    
    # 8 banks with partition: L1 uses bank 0-3, shared memory uses bank 4-7
    local extra_configs="-DUNIFIEDMEM_ENABLE -DDCACHE_SIZE=32768 -DDCACHE_NUM_BANKS=8 -DDCACHE_L1_NUM_BANKS=4"
    
    # Compile for unified mode with bank partition
    if ! compile_rtlsim "unified_partition" "${warps}" "${threads}" "${extra_configs}"; then
        echo "  Skipping unified bank partition tests due to compilation failure"
        return 1
    fi
    
    for app in "${APPS[@]}"; do
        output_dir="${OUTPUT_BASE}/${app}_w${warps}_t${threads}"
        
        echo ""
        echo "Testing ${app} (unified + bank partition, w${warps}_t${threads}):"
        echo "  Output directory: ${output_dir}"
        
        # Test with sm_sets=64 (50/50 split) for bank partition mode
        local sm_sets=64
        local log_file="${output_dir}/${app}_partition_s${sm_sets}.log"
        
        echo "  Running ${app} with bank partition (sm_sets=${sm_sets})..."
        
        cd "${VORTEX_BUILD}"
        
        # Clean and rebuild test application to ensure correct configuration
        echo "    Rebuilding ${app} with correct configuration..."
        local configs="-DNUM_CORES=4 -DNUM_WARPS=${warps} -DNUM_THREADS=${threads} -DPERF_ENABLE ${extra_configs}"
        make -C "tests/regression/${app}" clean > /dev/null 2>&1 || true
        CONFIGS="${configs}" make -C "tests/regression/${app}" -j$(nproc) > /dev/null 2>&1
        
        local cmd="CONFIGS=\"${extra_configs}\" ./ci/blackbox.sh --driver=rtlsim --app=${app} --cores=4 --warps=${warps} --threads=${threads} --args=\"-n${MATRIX_SIZE} -s${sm_sets}\" --perf=2"
        
        echo "Command: ${cmd}" > "${log_file}"
        echo "Date: $(date)" >> "${log_file}"
        echo "Mode: UNIFIED with BANK PARTITION (8 banks: 4 L1 + 4 SM)" >> "${log_file}"
        echo "Configuration: cores=4, warps=${warps}, threads=${threads}, sm_sets=${sm_sets}" >> "${log_file}"
        echo "========================================" >> "${log_file}"
        echo "" >> "${log_file}"
        
        local start_time=$(date +%s)
        
        if timeout 3600 bash -c "${cmd}" >> "${log_file}" 2>&1; then
            local end_time=$(date +%s)
            local elapsed=$((end_time - start_time))
            echo "    ✓ PASSED (${elapsed}s)"
            echo "STATUS: PASSED" >> "${log_file}"
            echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
        else
            local exit_code=$?
            local end_time=$(date +%s)
            local elapsed=$((end_time - start_time))
            if [ $exit_code -eq 124 ]; then
                echo "    ✗ TIMEOUT after ${elapsed}s"
                echo "STATUS: TIMEOUT" >> "${log_file}"
            else
                echo "    ✗ FAILED (${elapsed}s)"
                echo "STATUS: FAILED" >> "${log_file}"
            fi
            echo "ELAPSED_TIME: ${elapsed}s" >> "${log_file}"
        fi
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
    
    # Run unified mode with bank partition tests
    run_unified_bank_partition_tests "${warps}" "${threads}"
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
    echo "RTLSim Unified Cache Sweep Test Summary"
    echo "Date: $(date)"
    echo "Matrix size: ${MATRIX_SIZE}x${MATRIX_SIZE}"
    echo "========================================"
    echo ""
    echo "Modes tested:"
    echo "  - separate:  L1=16KB + SM=16KB (independent, baseline)"
    echo "  - unified:   32KB unified cache with dynamic partitioning"
    echo "  - partition: 32KB unified with 8 banks (4 L1 + 4 SM)"
    echo ""
    echo "SM sets interpretation (unified mode, 128 total sets):"
    echo "  sm_sets=8   -> L1=120 sets (30KB), SM=8 sets (2KB)"
    echo "  sm_sets=16  -> L1=112 sets (28KB), SM=16 sets (4KB)"
    echo "  sm_sets=32  -> L1=96 sets (24KB), SM=32 sets (8KB)"
    echo "  sm_sets=64  -> L1=64 sets (16KB), SM=64 sets (16KB) [50/50 baseline]"
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
            elapsed=$(grep "ELAPSED_TIME:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
            printf "    [separate   ] status=%-7s cycles=%-10s IPC=%-8s time=%s\n" "${status}" "${cycles}" "${ipc}" "${elapsed}" >> "${summary_file}"
        else
            echo "    [separate   ] log not found" >> "${summary_file}"
        fi
        
        # Check unified mode results
        for sm_sets in "${SM_SETS_LIST[@]}"; do
            log_file="${output_dir}/${app}_s${sm_sets}.log"
            if [ -f "${log_file}" ]; then
                status=$(grep -m1 "STATUS:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
                cycles=$(grep "cycles=" "${log_file}" 2>/dev/null | grep -oP 'cycles=\K[0-9]+' | tail -1 || echo "N/A")
                ipc=$(grep "IPC=" "${log_file}" 2>/dev/null | grep -oP 'IPC=\K[0-9.]+' | tail -1 || echo "N/A")
                elapsed=$(grep "ELAPSED_TIME:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
                printf "    [unified %3d] status=%-7s cycles=%-10s IPC=%-8s time=%s\n" "${sm_sets}" "${status}" "${cycles}" "${ipc}" "${elapsed}" >> "${summary_file}"
            else
                printf "    [unified %3d] log not found\n" "${sm_sets}" >> "${summary_file}"
            fi
        done
        
        # Check bank partition result
        log_file="${output_dir}/${app}_partition_s64.log"
        if [ -f "${log_file}" ]; then
            status=$(grep -m1 "STATUS:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
            cycles=$(grep "cycles=" "${log_file}" 2>/dev/null | grep -oP 'cycles=\K[0-9]+' | tail -1 || echo "N/A")
            ipc=$(grep "IPC=" "${log_file}" 2>/dev/null | grep -oP 'IPC=\K[0-9.]+' | tail -1 || echo "N/A")
            elapsed=$(grep "ELAPSED_TIME:" "${log_file}" 2>/dev/null | awk '{print $2}' || echo "N/A")
            printf "    [partition  ] status=%-7s cycles=%-10s IPC=%-8s time=%s\n" "${status}" "${cycles}" "${ipc}" "${elapsed}" >> "${summary_file}"
        else
            echo "    [partition  ] log not found" >> "${summary_file}"
        fi
        
        echo "" >> "${summary_file}"
    done
    echo "" >> "${summary_file}"
done

echo "Summary saved to: ${summary_file}"
echo ""
cat "${summary_file}"
