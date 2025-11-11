#!/bin/bash
# Quick Test: Run a single configuration to verify setup
# This is useful for debugging before running the full comparison

set -e

VORTEX_ROOT="${VORTEX_ROOT:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)}"
DOT8_DIR="${VORTEX_ROOT}/tests/regression/dot8"
BASELINE_DIR="${VORTEX_ROOT}/tests/regression/sgemm"

echo "=========================================="
echo "Quick Test: Single Configuration"
echo "=========================================="
echo ""
echo "This will test W=4, T=4 with N=32 (small matrix)"
echo ""

# Test configuration
WARPS=4
THREADS=4
CORES=4
CLUSTERS=1
N=32

echo "1. Rebuilding SimX..."
cd "${VORTEX_ROOT}"
./ci/blackbox.sh --driver=simx --clusters=${CLUSTERS} --cores=${CORES} \
                --warps=${WARPS} --threads=${THREADS} \
                --app=vecadd --args="-n1" > /tmp/quick_rebuild.log 2>&1

if [ $? -eq 0 ]; then
    echo "   ✓ SimX rebuild successful"
else
    echo "   ✗ SimX rebuild failed. Check /tmp/quick_rebuild.log"
    exit 1
fi

echo ""
echo "2. Running baseline (sgemm)..."
cd "${BASELINE_DIR}"
make clean-kernel > /dev/null 2>&1
if make kernel.vxbin > /tmp/baseline_build.log 2>&1 && \
   make run-simx OPTS="-n${N}" > /tmp/baseline_run.log 2>&1; then
    echo "   ✓ Baseline test passed"
    grep "PERF:" /tmp/baseline_run.log | tail -1
else
    echo "   ✗ Baseline test failed"
    echo "   Check /tmp/baseline_build.log and /tmp/baseline_run.log"
    exit 1
fi

echo ""
echo "3. Running dot8..."
cd "${DOT8_DIR}"
make clean-kernel > /dev/null 2>&1
if make kernel.vxbin > /tmp/dot8_build.log 2>&1 && \
   make run-simx OPTS="-n${N}" > /tmp/dot8_run.log 2>&1; then
    echo "   ✓ Dot8 test passed"
    grep "PERF:" /tmp/dot8_run.log | tail -1
else
    echo "   ✗ Dot8 test failed"
    echo "   Check /tmp/dot8_build.log and /tmp/dot8_run.log"
    exit 1
fi

echo ""
echo "=========================================="
echo "✓ Quick test completed successfully!"
echo "=========================================="
echo ""
echo "You can now run the full comparison:"
echo "  ./run_comparison.sh"
echo ""
