#!/bin/bash
# DOT8 综合前检查脚本

VORTEX_ROOT="/home/kejunwu/vortex"
PASS_COUNT=0
FAIL_COUNT=0
WARN_COUNT=0

echo "=============================================="
echo "  DOT8 ASIC 综合 - 预检查清单"
echo "=============================================="
echo ""

check_pass() {
    echo "✅ $1"
    ((PASS_COUNT++))
}

check_fail() {
    echo "❌ $1"
    ((FAIL_COUNT++))
}

check_warn() {
    echo "⚠️  $1"
    ((WARN_COUNT++))
}

# 1. 检查 VX_alu_dot8.sv
echo "[1/10] 检查 DOT8 执行单元..."
if [ -f "$VORTEX_ROOT/hw/rtl/core/VX_alu_dot8.sv" ]; then
    check_pass "VX_alu_dot8.sv 存在"
    
    # 检查文件内容
    if grep -q "module VX_alu_dot8" "$VORTEX_ROOT/hw/rtl/core/VX_alu_dot8.sv"; then
        check_pass "模块定义正确"
    else
        check_fail "模块定义可能有问题"
    fi
else
    check_fail "VX_alu_dot8.sv 不存在"
fi
echo ""

# 2. 检查 VX_gpu_pkg.vh
echo "[2/10] 检查指令包定义..."
if grep -q "INST_ALU_DOT8" "$VORTEX_ROOT/hw/rtl/VX_gpu_pkg.vh" 2>/dev/null; then
    check_pass "VX_gpu_pkg.vh 包含 INST_ALU_DOT8"
else
    check_fail "VX_gpu_pkg.vh 未定义 INST_ALU_DOT8"
fi
echo ""

# 3. 检查 VX_config.vh
echo "[3/10] 检查配置定义..."
if grep -q "LATENCY_DOT8" "$VORTEX_ROOT/hw/rtl/VX_config.vh" 2>/dev/null; then
    check_pass "VX_config.vh 定义了 LATENCY_DOT8"
    LATENCY=$(grep "define LATENCY_DOT8" "$VORTEX_ROOT/hw/rtl/VX_config.vh" | awk '{print $3}')
    echo "   延迟设置为: ${LATENCY:-未知}"
else
    check_fail "VX_config.vh 未定义 LATENCY_DOT8"
fi
echo ""

# 4. 检查 VX_decode.sv
echo "[4/10] 检查指令解码..."
if grep -q "DOT8" "$VORTEX_ROOT/hw/rtl/core/VX_decode.sv" 2>/dev/null; then
    check_pass "VX_decode.sv 包含 DOT8 解码逻辑"
    
    if grep -q "7'h03" "$VORTEX_ROOT/hw/rtl/core/VX_decode.sv"; then
        check_pass "使用正确的 opcode (0x0B, funct7=3)"
    else
        check_warn "请确认使用了正确的 opcode"
    fi
else
    check_fail "VX_decode.sv 未添加 DOT8 解码"
fi
echo ""

# 5. 检查 VX_alu_unit.sv
echo "[5/10] 检查 ALU 单元集成..."
if grep -q "VX_alu_dot8" "$VORTEX_ROOT/hw/rtl/core/VX_alu_unit.sv" 2>/dev/null; then
    check_pass "VX_alu_unit.sv 集成了 VX_alu_dot8"
else
    check_fail "VX_alu_unit.sv 未集成 VX_alu_dot8"
fi
echo ""

# 6. 检查 VX_trace_pkg.vh (可选)
echo "[6/10] 检查调试追踪..."
if grep -q "DOT8" "$VORTEX_ROOT/hw/rtl/VX_trace_pkg.vh" 2>/dev/null; then
    check_pass "VX_trace_pkg.vh 包含 DOT8 追踪"
else
    check_warn "VX_trace_pkg.vh 未添加 DOT8 追踪（可选）"
fi
echo ""

# 7. 检查测试程序
echo "[7/10] 检查测试程序..."
if [ -d "$VORTEX_ROOT/tests/regression/dot8" ]; then
    check_pass "dot8 测试目录存在"
    
    if [ -f "$VORTEX_ROOT/tests/regression/dot8/kernel.cpp" ]; then
        check_pass "kernel.cpp 存在"
    else
        check_warn "kernel.cpp 不存在"
    fi
else
    check_warn "tests/regression/dot8 目录不存在（可选）"
fi
echo ""

# 8. 检查 vx_intrinsics.h
echo "[8/10] 检查内联汇编定义..."
if [ -f "$VORTEX_ROOT/kernel/include/vx_intrinsics.h" ]; then
    if grep -q "vx_dot8" "$VORTEX_ROOT/kernel/include/vx_intrinsics.h"; then
        check_pass "vx_intrinsics.h 定义了 vx_dot8"
    else
        check_warn "vx_intrinsics.h 未定义 vx_dot8"
    fi
else
    check_warn "找不到 vx_intrinsics.h"
fi
echo ""

# 9. 检查综合工具
echo "[9/10] 检查综合工具..."
if command -v yosys &> /dev/null; then
    check_pass "Yosys 已安装"
else
    check_warn "Yosys 未安装或不在 PATH 中"
fi

if command -v dc_shell &> /dev/null; then
    check_pass "Synopsys DC 可用"
else
    check_warn "Synopsys DC 不可用（如使用 Yosys 可忽略）"
fi
echo ""

# 10. 检查构建环境
echo "[10/10] 检查构建环境..."
if [ -f "$VORTEX_ROOT/config.mk" ]; then
    check_pass "config.mk 存在"
else
    check_warn "config.mk 不存在，可能需要运行 configure"
fi

if [ -d "$VORTEX_ROOT/hw/syn/yosys" ]; then
    check_pass "Yosys 综合目录存在"
else
    check_fail "Yosys 综合目录不存在"
fi

if [ -d "$VORTEX_ROOT/hw/syn/synopsys" ]; then
    check_pass "Synopsys 综合目录存在"
else
    check_warn "Synopsys 综合目录不存在"
fi
echo ""

# 语法检查（可选）
echo "[额外] 语法检查..."
if command -v verilator &> /dev/null; then
    echo "运行 Verilator 语法检查..."
    verilator --lint-only -Wall \
        -I"$VORTEX_ROOT/hw/rtl" \
        -I"$VORTEX_ROOT/hw/rtl/libs" \
        -I"$VORTEX_ROOT/hw/rtl/interfaces" \
        -I"$VORTEX_ROOT/hw/rtl/core" \
        "$VORTEX_ROOT/hw/rtl/core/VX_alu_dot8.sv" 2>&1 | head -20
    
    if [ ${PIPESTATUS[0]} -eq 0 ]; then
        check_pass "语法检查通过"
    else
        check_warn "语法检查有警告/错误（请查看上面的输出）"
    fi
else
    check_warn "Verilator 不可用，跳过语法检查"
fi
echo ""

# 总结
echo "=============================================="
echo "  检查总结"
echo "=============================================="
echo ""
echo "通过: $PASS_COUNT"
echo "警告: $WARN_COUNT"
echo "失败: $FAIL_COUNT"
echo ""

if [ $FAIL_COUNT -eq 0 ]; then
    echo "✅ 所有必要检查通过！可以开始综合了"
    echo ""
    echo "下一步:"
    echo "  ./start_dot8_synthesis.sh"
    echo ""
    echo "或者直接运行:"
    echo "  cd hw/syn"
    echo "  ./run_dot8_synthesis.sh yosys 1"
    exit 0
else
    echo "❌ 有 $FAIL_COUNT 个必要项未通过"
    echo ""
    echo "请先修复上述问题，然后重新运行此检查脚本"
    echo ""
    echo "参考文档:"
    echo "  - Assignment 6: https://github.com/vortexgpgpu/vortex_tutorials/blob/main/Exercises/assignment6.md"
    echo "  - DOT8_QUICK_START.md"
    exit 1
fi
