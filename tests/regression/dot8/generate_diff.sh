#!/bin/bash
# Generate lab1.diff for Assignment 5 & 6 submission
# This creates a clean diff with only your changes

set -e

cd /home/kejunwu/vortex

echo "=========================================="
echo "Creating lab1.diff for Assignments 5 & 6"
echo "=========================================="
echo ""

# Assignment 5: SimX files - Modified files
MODIFIED_FILES=(
    "kernel/include/vx_intrinsics.h"
    "sim/simx/decode.cpp"
    "sim/simx/execute.cpp"
    "sim/simx/func_unit.cpp"
    "sim/simx/types.h"
)

# Assignment 6: RTL files - Modified files
RTL_MODIFIED_FILES=(
    "hw/rtl/VX_gpu_pkg.sv"
    "hw/rtl/VX_config.vh"
    "hw/rtl/VX_trace_pkg.sv"
    "hw/rtl/core/VX_decode.sv"
    "hw/rtl/core/VX_alu_unit.sv"
)

# Combine all modified files
ALL_MODIFIED_FILES=("${MODIFIED_FILES[@]}" "${RTL_MODIFIED_FILES[@]}")

# New files/directories to include (dot8 test directory)
NEW_FILES=(
    "tests/regression/dot8/Makefile"
    "tests/regression/dot8/kernel.cpp"
    "tests/regression/dot8/main.cpp"
    "tests/regression/dot8/common.h"
    "hw/rtl/core/VX_alu_dot8.sv"
)

OUTPUT_FILE="lab1.diff"

echo "Generating diff file: ${OUTPUT_FILE}"
echo ""

# Remove old diff if exists
rm -f "${OUTPUT_FILE}"

# Method 1: Using git diff for modified files
echo "Step 1: Adding modified files to diff..."
echo "  Assignment 5 - SimX modifications:"
for file in "${MODIFIED_FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "    ✓ $file"
    else
        echo "    ✗ Warning: $file not found"
    fi
done

echo "  Assignment 6 - RTL modifications:"
for file in "${RTL_MODIFIED_FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "    ✓ $file"
    else
        echo "    ✗ Warning: $file not found"
    fi
done

git diff HEAD -- "${ALL_MODIFIED_FILES[@]}" > "${OUTPUT_FILE}"

echo ""
echo "Step 2: Adding new files to diff..."

# Method 2: For new files, create them as additions
for file in "${NEW_FILES[@]}"; do
    if [ -f "$file" ]; then
        echo "    + $file"
        # Add new file to git temporarily to get proper diff
        git add -N "$file" 2>/dev/null || true
    elif [ -d "$file" ]; then
        echo "    + $file/ (directory)"
    else
        echo "    ✗ Warning: $file not found"
    fi
done

# Generate diff for new files
git diff HEAD -- "${NEW_FILES[@]}" >> "${OUTPUT_FILE}"

# Reset the staged new files
git reset HEAD "${NEW_FILES[@]}" 2>/dev/null || true

echo ""
echo "=========================================="
echo "✓ Diff file created: ${OUTPUT_FILE}"
echo "=========================================="
echo ""

# Show statistics
echo "Statistics:"
LINES=$(wc -l < "${OUTPUT_FILE}")
ADDITIONS=$(grep -c "^+" "${OUTPUT_FILE}" 2>/dev/null || echo "0")
DELETIONS=$(grep -c "^-" "${OUTPUT_FILE}" 2>/dev/null || echo "0")
echo "  Total lines: ${LINES}"
echo "  Additions (+): ${ADDITIONS}"
echo "  Deletions (-): ${DELETIONS}"

echo ""
echo "Files included in diff:"
grep -E "^diff --git|^\+\+\+ b/" "${OUTPUT_FILE}" | sed 's/^diff --git a\/.* b\///; s/^\+\+\+ b\//  ✓ /' | grep -E "^\s+✓" | sort -u

echo ""
echo "=========================================="
echo "Assignment Coverage Check:"
echo "=========================================="
echo "Assignment 5 (SimX):"
echo "  - vx_intrinsics.h: VX_DOT8 instruction definition"
echo "  - simx/types.h: AluType::DOT8 enum"
echo "  - simx/decode.cpp: DOT8 instruction decoding"
echo "  - simx/execute.cpp: DOT8 execution logic"
echo "  - simx/func_unit.cpp: DOT8 timing model (2 cycles)"
echo "  - tests/regression/dot8/: Test kernel implementation"
echo ""
echo "Assignment 6 (RTL):"
echo "  - VX_gpu_pkg.sv: INST_ALU_DOT8 definition"
echo "  - VX_config.vh: LATENCY_DOT8 = 2"
echo "  - VX_trace_pkg.sv: DOT8 trace support"
echo "  - VX_decode.sv: DOT8 instruction decoding in RTL"
echo "  - VX_alu_dot8.sv: Hardware implementation"
echo "  - VX_alu_unit.sv: Integration of DOT8 unit"
echo ""
echo "✓ Diff generation complete!"
echo ""
echo "Review the diff file before submission:"
echo "  cat lab1.diff"
echo "  less lab1.diff"
echo "  code lab1.diff  # View in VSCode"
echo ""
