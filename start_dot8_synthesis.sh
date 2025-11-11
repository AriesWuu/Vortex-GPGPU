#!/bin/bash
# DOT8 ASIC 综合 - 一键启动脚本

echo "=============================================="
echo "  Vortex DOT8 ASIC 综合 - 一键启动"
echo "=============================================="
echo ""
echo "此脚本将帮助你快速开始 DOT8 指令的 ASIC 综合"
echo ""

# 检查当前目录
VORTEX_ROOT="/home/kejunwu/vortex"
if [ ! -d "$VORTEX_ROOT/hw/syn" ]; then
    echo "❌ 错误: 找不到 Vortex 项目目录"
    echo "   请确保你在正确的目录中"
    exit 1
fi

echo "✅ Vortex 项目目录: $VORTEX_ROOT"
echo ""

# 检查 DOT8 RTL 文件
echo "检查 DOT8 RTL 文件..."
if [ -f "$VORTEX_ROOT/hw/rtl/core/VX_alu_dot8.sv" ]; then
    echo "✅ 找到 VX_alu_dot8.sv"
else
    echo "❌ 未找到 VX_alu_dot8.sv"
    echo "   请先完成 DOT8 的 RTL 实现"
    exit 1
fi

# 检查修改
echo ""
echo "检查必要的修改..."

if grep -q "INST_ALU_DOT8" "$VORTEX_ROOT/hw/rtl/VX_gpu_pkg.vh" 2>/dev/null; then
    echo "✅ VX_gpu_pkg.vh 已更新"
else
    echo "⚠️  VX_gpu_pkg.vh 可能未更新"
fi

if grep -q "LATENCY_DOT8" "$VORTEX_ROOT/hw/rtl/VX_config.vh" 2>/dev/null; then
    echo "✅ VX_config.vh 已更新"
else
    echo "⚠️  VX_config.vh 可能未更新"
fi

echo ""
echo "=============================================="
echo "  选择综合工具"
echo "=============================================="
echo ""
echo "1) Yosys (开源工具，推荐新手，5-15分钟)"
echo "2) Synopsys Design Compiler (工业标准，需要许可证)"
echo "3) 查看现有结果"
echo "4) 查看帮助文档"
echo "5) 退出"
echo ""

read -p "请选择 (1-5): " tool_choice

case $tool_choice in
    1)
        echo ""
        echo "你选择了: Yosys 开源综合"
        echo ""
        read -p "输入核心数 (1, 2, 4, 推荐1): " cores
        cores=${cores:-1}
        
        echo ""
        echo "开始综合 ${cores} 核心配置..."
        echo "这可能需要 5-15 分钟，请耐心等待..."
        echo ""
        
        cd "$VORTEX_ROOT/hw/syn"
        ./run_dot8_synthesis.sh yosys $cores
        
        echo ""
        echo "=============================================="
        echo "  综合完成!"
        echo "=============================================="
        echo ""
        echo "结果位于: hw/syn/dot8_synthesis_results_*/"
        echo ""
        read -p "是否查看结果? (y/n): " view_results
        if [ "$view_results" = "y" ]; then
            RESULT_DIR=$(ls -dt hw/syn/dot8_synthesis_results_* 2>/dev/null | head -1)
            if [ -d "$RESULT_DIR" ]; then
                echo ""
                echo "结果目录内容:"
                ls -lh "$RESULT_DIR"
                echo ""
                echo "综合报告:"
                cat "$RESULT_DIR"/DOT8_Synthesis_Report_*.md 2>/dev/null || echo "未找到报告文件"
            fi
        fi
        ;;
        
    2)
        echo ""
        echo "你选择了: Synopsys Design Compiler"
        echo ""
        
        # 检查 DC 是否可用
        if ! command -v dc_shell &> /dev/null; then
            echo "❌ 错误: 找不到 dc_shell"
            echo "   请确保 Synopsys DC 已安装并配置"
            exit 1
        fi
        
        echo "✅ 检测到 dc_shell"
        read -p "输入核心数 (推荐1): " cores
        cores=${cores:-1}
        
        echo ""
        echo "开始 DC 综合 ${cores} 核心配置..."
        echo "这可能需要 10-30 分钟，请耐心等待..."
        echo ""
        
        cd "$VORTEX_ROOT/hw/syn"
        ./run_dot8_synthesis.sh synopsys $cores
        ;;
        
    3)
        echo ""
        echo "查找现有综合结果..."
        cd "$VORTEX_ROOT/hw/syn"
        
        if ls -d dot8_synthesis_results_* 2>/dev/null | grep -q .; then
            echo ""
            echo "找到以下结果目录:"
            ls -dt dot8_synthesis_results_*/
            echo ""
            
            LATEST=$(ls -dt dot8_synthesis_results_* 2>/dev/null | head -1)
            echo "最新结果: $LATEST"
            echo ""
            
            read -p "查看最新结果? (y/n): " view_latest
            if [ "$view_latest" = "y" ]; then
                echo ""
                ls -lh "$LATEST"
                echo ""
                if [ -f "$LATEST"/DOT8_Synthesis_Report_*.md ]; then
                    cat "$LATEST"/DOT8_Synthesis_Report_*.md
                fi
            fi
        else
            echo "❌ 未找到综合结果"
            echo "   请先运行综合"
        fi
        ;;
        
    4)
        echo ""
        echo "=============================================="
        echo "  帮助文档"
        echo "=============================================="
        echo ""
        echo "可用文档:"
        echo "1. DOT8_QUICK_START.md - 快速开始指南"
        echo "2. DOT8_ASIC_SYNTHESIS_GUIDE.md - 详细综合指南"
        echo ""
        
        if [ -f "$VORTEX_ROOT/DOT8_QUICK_START.md" ]; then
            read -p "查看快速开始指南? (y/n): " view_guide
            if [ "$view_guide" = "y" ]; then
                less "$VORTEX_ROOT/DOT8_QUICK_START.md"
            fi
        fi
        ;;
        
    5)
        echo "退出"
        exit 0
        ;;
        
    *)
        echo "无效选项"
        exit 1
        ;;
esac

echo ""
echo "=============================================="
echo "  下一步建议"
echo "=============================================="
echo ""
echo "1. 查看综合日志了解详细信息"
echo "2. 使用 extract_synthesis_metrics.sh 提取关键指标"
echo "3. 对比不同核心配置的结果"
echo "4. 生成性能/成本分析报告"
echo ""
echo "详细信息请查看: DOT8_QUICK_START.md"
echo ""
