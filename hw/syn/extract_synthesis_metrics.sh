#!/bin/bash
# 提取和对比综合结果的脚本

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

echo "========================================="
echo "  Vortex DOT8 综合结果提取工具"
echo "========================================="

# 提取 Yosys 结果
extract_yosys_metrics() {
    local log_file=$1
    local cores=$2
    
    if [ ! -f "$log_file" ]; then
        echo "找不到日志文件: $log_file"
        return 1
    fi
    
    echo "从 $log_file 提取 Yosys 指标..."
    
    # 提取面积和单元数
    local cells=$(grep -i "Number of cells" $log_file | awk '{print $4}' | tail -1)
    local area=$(grep -i "Chip area" $log_file | awk '{print $4}' | tail -1)
    
    echo "核心数: $cores"
    echo "单元数: ${cells:-N/A}"
    echo "面积: ${area:-N/A} um²"
    echo ""
}

# 提取 Synopsys DC 结果
extract_dc_metrics() {
    local log_file=$1
    local cores=$2
    
    if [ ! -f "$log_file" ]; then
        echo "找不到日志文件: $log_file"
        return 1
    fi
    
    echo "从 $log_file 提取 Synopsys DC 指标..."
    
    # 提取面积
    local area=$(grep -i "Total cell area" $log_file | awk '{print $4}' | tail -1)
    
    # 提取时序
    local slack=$(grep -i "slack" $log_file | grep -v "^#" | awk '{print $2}' | head -1)
    
    # 提取功耗
    local total_power=$(grep -i "Total Dynamic Power" $log_file | awk '{print $5}' | tail -1)
    local leakage=$(grep -i "Cell Leakage Power" $log_file | awk '{print $5}' | tail -1)
    
    echo "核心数: $cores"
    echo "面积: ${area:-N/A} um²"
    echo "时序裕量: ${slack:-N/A} ns"
    echo "动态功耗: ${total_power:-N/A} mW"
    echo "泄漏功耗: ${leakage:-N/A} mW"
    echo ""
}

# 生成对比表格
generate_comparison_table() {
    local results_dir=$1
    
    echo "========================================="
    echo "  综合结果对比"
    echo "========================================="
    echo ""
    
    # Yosys 结果表格
    echo "## Yosys 开源综合"
    echo ""
    echo "| 核心数 | 单元数 | 面积 (um²) |"
    echo "|--------|--------|------------|"
    
    for cores in 1 2 4 8; do
        local yosys_log="$results_dir/yosys_synth_${cores}c.log"
        if [ -f "$yosys_log" ]; then
            local cells=$(grep -i "Number of cells" $yosys_log | awk '{print $4}' | tail -1)
            local area=$(grep -i "Chip area" $yosys_log | awk '{print $4}' | tail -1)
            echo "| $cores | ${cells:-N/A} | ${area:-N/A} |"
        fi
    done
    
    echo ""
    echo "## Synopsys Design Compiler"
    echo ""
    echo "| 核心数 | 面积 (um²) | 时序裕量 (ns) | 动态功耗 (mW) |"
    echo "|--------|------------|---------------|---------------|"
    
    for cores in 1 2 4 8; do
        local dc_log="$results_dir/dc_synth_${cores}c.log"
        if [ -f "$dc_log" ]; then
            local area=$(grep -i "Total cell area" $dc_log | awk '{print $4}' | tail -1)
            local slack=$(grep -i "slack" $dc_log | grep -v "^#" | awk '{print $2}' | head -1)
            local power=$(grep -i "Total Dynamic Power" $dc_log | awk '{print $5}' | tail -1)
            echo "| $cores | ${area:-N/A} | ${slack:-N/A} | ${power:-N/A} |"
        fi
    done
    
    echo ""
}

# 查找 DOT8 相关统计
find_dot8_stats() {
    local log_file=$1
    
    echo "========================================="
    echo "  DOT8 模块统计"
    echo "========================================="
    
    if [ ! -f "$log_file" ]; then
        echo "找不到日志文件: $log_file"
        return 1
    fi
    
    echo "搜索 DOT8 相关内容..."
    grep -i "dot8\|VX_alu_dot8" $log_file | head -20
    echo ""
}

# 主菜单
show_menu() {
    echo ""
    echo "请选择操作:"
    echo "1) 提取单个 Yosys 结果"
    echo "2) 提取单个 Synopsys DC 结果"
    echo "3) 生成多核心对比表格"
    echo "4) 查找 DOT8 模块统计"
    echo "5) 退出"
    echo ""
    read -p "请输入选项 (1-5): " choice
    
    case $choice in
        1)
            read -p "输入 Yosys 日志文件路径: " log_file
            read -p "输入核心数: " cores
            extract_yosys_metrics "$log_file" "$cores"
            show_menu
            ;;
        2)
            read -p "输入 Synopsys DC 日志文件路径: " log_file
            read -p "输入核心数: " cores
            extract_dc_metrics "$log_file" "$cores"
            show_menu
            ;;
        3)
            read -p "输入结果目录路径: " results_dir
            generate_comparison_table "$results_dir"
            show_menu
            ;;
        4)
            read -p "输入日志文件路径: " log_file
            find_dot8_stats "$log_file"
            show_menu
            ;;
        5)
            echo "退出"
            exit 0
            ;;
        *)
            echo "无效选项"
            show_menu
            ;;
    esac
}

# 如果提供了参数，直接处理
if [ $# -gt 0 ]; then
    case $1 in
        --yosys)
            extract_yosys_metrics "$2" "$3"
            ;;
        --dc)
            extract_dc_metrics "$2" "$3"
            ;;
        --compare)
            generate_comparison_table "$2"
            ;;
        --find-dot8)
            find_dot8_stats "$2"
            ;;
        *)
            echo "用法:"
            echo "  $0 --yosys <log_file> <cores>"
            echo "  $0 --dc <log_file> <cores>"
            echo "  $0 --compare <results_dir>"
            echo "  $0 --find-dot8 <log_file>"
            echo "  $0  (交互模式)"
            ;;
    esac
else
    show_menu
fi
