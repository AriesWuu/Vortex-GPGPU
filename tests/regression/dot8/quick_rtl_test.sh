#!/bin/bash
# Quick RTL Test Script - Single Configuration Test
# Tests one warp/thread configuration to verify RTL simulation works

set -e

# Configuration
VORTEX_ROOT="${VORTEX_ROOT:-$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)}"
BLACKBOX="${VORTEX_ROOT}/ci/blackbox.sh"
N=64  # Smaller size for quick test
CLUSTERS=1
CORES=2
WARPS=2
THREADS=2

# Colors
GREEN='\033[0;32m'
BLUE='\033[0;34m'
YELLOW='\033[1;33m'
RED='\033[0;31m'
NC='\033[0m'

echo -e "${BLUE}========================================${NC}"
echo -e "${BLUE}Quick RTL Test - DOT8 vs Baseline${NC}"
echo -e "${BLUE}========================================${NC}"
echo ""
echo "Configuration: N=${N}, Clusters=${CLUSTERS}, Cores=${CORES}, Warps=${WARPS}, Threads=${THREADS}"
echo ""

# Test Baseline
echo -e "${YELLOW}[1/2] Testing Baseline SGEMM with RTL...${NC}"
if "${BLACKBOX}" --driver=rtlsim --clusters=${CLUSTERS} --cores=${CORES} \
    --warps=${WARPS} --threads=${THREADS} --app=sgemm --args="-n${N}"; then
    echo -e "${GREEN}✓ Baseline RTL test passed${NC}"
else
    echo -e "${RED}✗ Baseline RTL test failed${NC}"
    exit 1
fi

echo ""

# Test DOT8
echo -e "${YELLOW}[2/2] Testing DOT8 Accelerated with RTL...${NC}"
if "${BLACKBOX}" --driver=rtlsim --clusters=${CLUSTERS} --cores=${CORES} \
    --warps=${WARPS} --threads=${THREADS} --app=dot8 --args="-n${N}"; then
    echo -e "${GREEN}✓ DOT8 RTL test passed${NC}"
else
    echo -e "${RED}✗ DOT8 RTL test failed${NC}"
    exit 1
fi

echo ""
echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}Quick RTL Test Complete!${NC}"
echo -e "${GREEN}========================================${NC}"
echo ""
echo "Both baseline and DOT8 tests passed with RTL simulation."
echo "You can now run the full comparison with:"
echo "  ./tests/regression/dot8/run_rtl_comparison.sh"
echo ""
