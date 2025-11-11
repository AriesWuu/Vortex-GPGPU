#!/bin/bash
# DOT8 ASIC 综合自动化脚本
# 用法: ./run_dot8_synthesis.sh [yosys|synopsys|both] [cores]

set -e

TOOL=${1:-yosys}
CORES=${2:-1}
TIMESTAMP=$(date +%Y%m%d_%H%M%S)
RESULTS_DIR="dot8_synthesis_results_${TIMESTAMP}"

echo "========================================="
echo "  Vortex DOT8 ASIC 综合脚本"
echo "========================================="
echo "工具: $TOOL"
echo "核心数: $CORES"
echo "时间戳: $TIMESTAMP"
echo "========================================="

mkdir -p $RESULTS_DIR

# 检查 RTL 文件是否存在
check_rtl_files() {
    echo "检查 DOT8 RTL 文件..."
    
    if [ ! -f "../../rtl/core/VX_alu_dot8.sv" ]; then
        echo "❌ 错误: 找不到 VX_alu_dot8.sv"
        exit 1
    fi
    
    if ! grep -q "INST_ALU_DOT8" ../../rtl/VX_gpu_pkg.vh; then
        echo "⚠️  警告: VX_gpu_pkg.vh 中未找到 INST_ALU_DOT8"
    fi
    
    if ! grep -q "LATENCY_DOT8" ../../rtl/VX_config.vh; then
        echo "⚠️  警告: VX_config.vh 中未找到 LATENCY_DOT8"
    fi
    
    echo "✅ RTL 文件检查完成"
}

# Yosys 综合
run_yosys_synthesis() {
    echo ""
    echo "========================================="
    echo "  开始 Yosys 开源综合"
    echo "========================================="
    
    cd yosys
    
    BUILD_PREFIX="build_dot8_${CORES}c"
    LOG_FILE="${BUILD_PREFIX}_${TIMESTAMP}.log"
    
    echo "构建目录: $BUILD_PREFIX"
    echo "日志文件: $LOG_FILE"
    
    # 清理旧构建
    if [ -d "$BUILD_PREFIX" ]; then
        echo "清理旧构建..."
        rm -rf $BUILD_PREFIX
    fi
    
    # 运行综合
    echo "正在生成源文件列表..."
    PREFIX=$BUILD_PREFIX NUM_CORES=$CORES make gen-sources 2>&1 | tee ../$RESULTS_DIR/yosys_gen_sources.log
    
    echo "正在转换 SystemVerilog..."
    PREFIX=$BUILD_PREFIX NUM_CORES=$CORES make sv2v 2>&1 | tee ../$RESULTS_DIR/yosys_sv2v.log
    
    echo "正在运行综合..."
    PREFIX=$BUILD_PREFIX NUM_CORES=$CORES make build 2>&1 | tee ../$RESULTS_DIR/$LOG_FILE
    
    # 提取关键指标
    echo ""
    echo "========================================="
    echo "  Yosys 综合结果"
    echo "========================================="
    
    if [ -f "$BUILD_PREFIX/synth.log" ]; then
        echo "面积统计:"
        grep -i "area\|cells" $BUILD_PREFIX/synth.log | head -10
        
        # 复制结果
        cp $BUILD_PREFIX/synth.log ../$RESULTS_DIR/yosys_synth_${CORES}c.log
        
        echo "✅ Yosys 综合完成!"
        echo "结果保存在: $RESULTS_DIR/"
    else
        echo "❌ Yosys 综合失败!"
        exit 1
    fi
    
    cd ..
}

# Synopsys DC 综合
run_synopsys_synthesis() {
    echo ""
    echo "========================================="
    echo "  开始 Synopsys Design Compiler 综合"
    echo "========================================="
    
    # 检查 DC 是否可用
    if ! command -v dc_shell &> /dev/null; then
        echo "❌ 错误: 找不到 dc_shell，请确保 Synopsys DC 已安装并配置"
        return 1
    fi
    
    cd synopsys
    
    LOG_FILE="vortex_dot8_${CORES}c_${TIMESTAMP}.log"
    
    echo "日志文件: $LOG_FILE"
    
    # 清理旧构建
    echo "清理旧构建..."
    make clean > /dev/null 2>&1
    
    # 运行综合
    echo "正在运行 DC 综合（这可能需要几分钟）..."
    make dc 2>&1 | tee ../$RESULTS_DIR/$LOG_FILE
    
    # 提取关键指标
    echo ""
    echo "========================================="
    echo "  Synopsys DC 综合结果"
    echo "========================================="
    
    if [ -f "vortex_syn.log" ]; then
        echo "面积报告:"
        grep -A 5 "Total cell area" vortex_syn.log || grep -i "area" vortex_syn.log | head -5
        
        echo ""
        echo "时序报告:"
        grep -i "slack\|timing" vortex_syn.log | head -5
        
        echo ""
        echo "功耗报告:"
        grep -i "power" vortex_syn.log | head -5
        
        # 复制结果
        cp vortex_syn.log ../$RESULTS_DIR/dc_synth_${CORES}c.log
        [ -d "rpt" ] && cp -r rpt ../$RESULTS_DIR/dc_reports_${CORES}c
        [ -f "Vortex.netlist.v" ] && cp Vortex.netlist.v ../$RESULTS_DIR/
        
        echo "✅ Synopsys DC 综合完成!"
        echo "结果保存在: $RESULTS_DIR/"
    else
        echo "❌ Synopsys DC 综合失败!"
        return 1
    fi
    
    cd ..
}

# 生成综合报告
generate_report() {
    echo ""
    echo "========================================="
    echo "  生成综合报告"
    echo "========================================="
    
    REPORT_FILE="$RESULTS_DIR/DOT8_Synthesis_Report_${TIMESTAMP}.md"
    
    cat > $REPORT_FILE << EOF
# Vortex DOT8 ASIC 综合报告

生成时间: $(date)
核心数: $CORES
综合工具: $TOOL

## 配置信息

- 工艺: NanGate 15nm (Yosys) / 用户配置 (Synopsys)
- 核心数: $CORES
- DOT8 延迟: 2 cycles
- 顶层模块: Vortex

## 文件清单

EOF

    # 列出生成的文件
    echo "### 生成的文件:" >> $REPORT_FILE
    ls -lh $RESULTS_DIR/ >> $REPORT_FILE
    
    echo ""
    echo "✅ 报告已生成: $REPORT_FILE"
}

# 主流程
main() {
    check_rtl_files
    
    case $TOOL in
        yosys)
            run_yosys_synthesis
            ;;
        synopsys)
            run_synopsys_synthesis
            ;;
        both)
            run_yosys_synthesis
            echo ""
            echo "等待 5 秒后开始 Synopsys 综合..."
            sleep 5
            run_synopsys_synthesis
            ;;
        *)
            echo "❌ 未知工具: $TOOL"
            echo "用法: $0 [yosys|synopsys|both] [cores]"
            exit 1
            ;;
    esac
    
    generate_report
    
    echo ""
    echo "========================================="
    echo "  综合完成!"
    echo "========================================="
    echo "结果目录: $(pwd)/$RESULTS_DIR"
    echo ""
    echo "查看结果:"
    echo "  cd $RESULTS_DIR"
    echo "  ls -la"
    echo ""
}

main
