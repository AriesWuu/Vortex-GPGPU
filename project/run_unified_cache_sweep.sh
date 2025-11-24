#!/bin/bash

# Script to sweep Unified Cache Percentages for Vortex SimX
# Kernels: sgemm, sgemm2, conv3
# Config: 4 Cores, 4 Warps, 4 Threads
# Input Size: 256

set -u

# Configuration
# KERNELS=("sgemm" "sgemm2" "conv3")
KERNELS=("sgemm2")
# PERCENTS defined per kernel
CORES=4
# Format: "WARPS THREADS"
# CONFIGS=("4 4" "4 8" "8 4" "8 8")
# CONFIGS=("4 8" "8 4" "8 8")
CONFIGS=("8 8")
SIZE=256

# Paths
VORTEX_HOME="/home/kejunwu/vortex"
PROJECT_DIR="/home/kejunwu/vortex/project"
BLACKBOX_SCRIPT="${VORTEX_HOME}/ci/blackbox.sh"

# Ensure project directory exists
mkdir -p "$PROJECT_DIR"

echo "========================================================"
echo "Starting Unified Cache Sweep"
echo "Kernels: ${KERNELS[*]}"
echo "Percents: Varies by kernel"
echo "Configs (Warps Threads): ${CONFIGS[*]}"
echo "Input Size: ${SIZE}"
echo "========================================================"

for KERNEL in "${KERNELS[@]}"; do
    if [ "$KERNEL" == "sgemm2" ]; then
        # Using percentages
        PERCENTS=(96 97 98 99)
    else
        PERCENTS=(0 20 40 60 80 100)
    fi

    for CONFIG in "${CONFIGS[@]}"; do
        # Split config string into variables
        read -r WARPS THREADS <<< "$CONFIG"
            
        CONFIG_NAME="w${WARPS}_t${THREADS}"
        RESULTS_DIR="${PROJECT_DIR}/simx_results_${KERNEL}_${CONFIG_NAME}"
        mkdir -p "$RESULTS_DIR"
        
        SUMMARY_FILE="${RESULTS_DIR}/summary.csv"
        # Initialize summary file with header
        echo "Percent,Cycles,IPC,HitRatio,BankStalls,Status" > "$SUMMARY_FILE"

        echo "Processing Kernel: $KERNEL | Config: Warps=$WARPS, Threads=$THREADS"
        echo "Results directory: $RESULTS_DIR"

        # Calculate Tile Size for sgemm2
        TILE_SIZE=4 # Default
        if [ "$KERNEL" == "sgemm2" ]; then
             TOTAL_THREADS=$((WARPS * THREADS))
             TILE_SIZE=$(python3 -c "import math; print(int(math.sqrt($TOTAL_THREADS)))")
             echo "  -> Calculated Tile Size: ${TILE_SIZE} (for ${TOTAL_THREADS} threads)"
        fi

        # Function to run a test case
        run_test() {
            local label=$1
            local configs=$2
            local log_file="${RESULTS_DIR}/run_${label}.log"

            echo "  [${KERNEL}][${CONFIG_NAME}] Running ${label}..."

            # 1. Clean previous build
            make -C "${VORTEX_HOME}/tests/regression/${KERNEL}" clean > /dev/null 2>&1

            # Prepare arguments
            local app_args="-n${SIZE}"
            if [ "$KERNEL" == "sgemm2" ]; then
                app_args="${app_args} -t${TILE_SIZE}"
            fi

            # 2. Run simulation
            CONFIGS="${configs}" "${BLACKBOX_SCRIPT}" \
                --driver=simx \
                --app="${KERNEL}" \
                --args="${app_args}" \
                --perf=2 \
                > "$log_file" 2>&1
            
            local exit_code=$?
            local cycles="N/A"
            local ipc="N/A"
            local hit_ratio="N/A"
            local bank_stalls="N/A"
            local status="Failed"

            # 3. Parse results
            if [ $exit_code -eq 0 ]; then
                local perf_line=$(grep "PERF: instrs=" "$log_file" | tail -n 1)
                if [ -n "$perf_line" ]; then
                    cycles=$(echo "$perf_line" | grep -oP "cycles=\K\d+")
                    ipc=$(echo "$perf_line" | grep -oP "IPC=\K[\d\.]+")
                    status="Success"
                else
                    status="ParseError"
                fi

                # Extract Cache Stats (using Core 0 as representative)
                local cache_line=$(grep "PERF: core0: dcache read misses=" "$log_file" | head -n 1)
                if [ -n "$cache_line" ]; then
                    hit_ratio=$(echo "$cache_line" | grep -oP "hit ratio=\K\d+")
                fi

                local stall_line=$(grep "PERF: core0: dcache bank stalls=" "$log_file" | head -n 1)
                if [ -n "$stall_line" ]; then
                    bank_stalls=$(echo "$stall_line" | grep -oP "stalls=\K\d+")
                fi
            fi

            # 4. Save to summary
            echo "${label},${cycles},${ipc},${hit_ratio},${bank_stalls},${status}" >> "$SUMMARY_FILE"
            echo "    -> Status: ${status}, Cycles: ${cycles}, IPC: ${ipc}, HitRatio: ${hit_ratio}%, BankStalls: ${bank_stalls}"
        }

        # --- Baseline Run (No Unified Cache) ---
        run_test "Baseline" "-DNUM_CORES=${CORES} -DNUM_WARPS=${WARPS} -DNUM_THREADS=${THREADS}"

        # --- Unified Cache Sweep ---
        for PERCENT in "${PERCENTS[@]}"; do
            run_test "${PERCENT}" "-DENABLE_UNIFIED_CACHE -DUNIFIED_CACHE_PERCENT=${PERCENT} -DNUM_CORES=${CORES} -DNUM_WARPS=${WARPS} -DNUM_THREADS=${THREADS}"
        done
        echo "------------------------------------------------"
    done
done

echo "Sweep Completed."
echo "Results are stored in ${PROJECT_DIR}/simx_results_*"
