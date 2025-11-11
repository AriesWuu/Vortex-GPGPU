# Vortex DOT8 指令 ASIC 综合指南

本指南介绍如何对添加了 DOT8 指令的 Vortex RTL 代码进行 ASIC 综合。

## 前提条件

确认你已经完成了以下修改：
- ✅ 修改了 `hw/rtl/VX_gpu_pkg.vh` (添加 `INST_ALU_DOT8`)
- ✅ 修改了 `hw/rtl/VX_config.vh` (定义 `LATENCY_DOT8`)
- ✅ 修改了 `hw/rtl/VX_trace_pkg.vh` (添加 DOT8 trace)
- ✅ 修改了 `hw/rtl/core/VX_decode.sv` (解码 DOT8 指令)
- ✅ 创建了 `hw/rtl/core/VX_alu_dot8.sv` (DOT8 执行单元)
- ✅ 修改了 `hw/rtl/core/VX_alu_unit.sv` (集成 DOT8 单元)

## 方法 1: 使用 Yosys（开源方案，推荐新手）

Yosys 是一个开源的综合工具，适合快速验证和学习。

### 步骤 1: 准备环境

```bash
cd /home/kejunwu/vortex
source build/ci/toolchain_env.sh
```

### 步骤 2: 配置综合参数

```bash
cd hw/syn/yosys
```

你可以配置以下参数：
- `NUM_CORES`: 核心数量（1, 2, 4, 8, 16, 32）
- `TOP_LEVEL_ENTITY`: 顶层模块名（默认是 Vortex）
- `PREFIX`: 构建输出目录前缀

### 步骤 3: 生成源文件列表

首先生成包含你的 DOT8 模块的源文件列表：

```bash
# 单核配置
PREFIX=build_dot8_1c NUM_CORES=1 make gen-sources

# 查看生成的源文件列表
ls -la build_dot8_1c/
cat build_dot8_1c/sources.txt | grep -i dot8
```

确认 `VX_alu_dot8.sv` 在源文件列表中。

### 步骤 4: SystemVerilog 转换为 Verilog

Yosys 需要将 SystemVerilog 转换为标准 Verilog：

```bash
# 转换 SV 到 V
PREFIX=build_dot8_1c NUM_CORES=1 make sv2v

# 检查转换后的文件
ls -la build_dot8_1c/project.v
```

### 步骤 5: 运行综合

```bash
# 完整综合流程（推荐）
PREFIX=build_dot8_1c NUM_CORES=1 make build

# 或者分步执行：
# 仅做 elaboration（快速检查）
PREFIX=build_dot8_1c NUM_CORES=1 make elaborate

# 完整综合
PREFIX=build_dot8_1c NUM_CORES=1 make synthesis
```

### 步骤 6: 查看综合结果

```bash
cd build_dot8_1c

# 查看综合日志
less synth.log

# 查看面积报告
grep -i "area" synth.log

# 查看资源使用
grep -i "Number of" synth.log

# 查看生成的网表
ls -lh *.v
```

### 步骤 7: 不同配置的综合

测试不同核心配置下的 DOT8 性能：

```bash
cd /home/kejunwu/vortex/hw/syn/yosys

# 1 核心
PREFIX=build_dot8_1c NUM_CORES=1 make build > synthesis_1c.log 2>&1 &

# 2 核心
PREFIX=build_dot8_2c NUM_CORES=2 make build > synthesis_2c.log 2>&1 &

# 4 核心
PREFIX=build_dot8_4c NUM_CORES=4 make build > synthesis_4c.log 2>&1 &

# 检查进程
jobs
```

---

## 方法 2: 使用 Synopsys Design Compiler（商业工具，更精确）

如果你有 Synopsys DC 的访问权限，这是工业级的 ASIC 综合方案。

### 步骤 1: 准备环境

```bash
cd /home/kejunwu/vortex/hw/syn/synopsys

# 确认 DC 环境
which dc_shell
dc_shell -version
```

### 步骤 2: 检查工艺库

编辑 `esyn.tcl` 或 `syn.tcl`，确认工艺库路径正确：

```tcl
# 查看当前配置的工艺库
cat esyn.tcl | grep target_library
```

默认使用 NanGate 15nm 开源 PDK：
```tcl
set target_library [concat ./NanGate_15nm_OCL.db]
```

### 步骤 3: 准备源文件列表

你需要确保所有源文件（包括 `VX_alu_dot8.sv`）被包含在 Verilog 文件列表中。

使用脚本生成源文件列表：

```bash
cd /home/kejunwu/vortex/hw/scripts
./gen_sources.sh -P "-DNUM_CORES=1 -I../rtl -I../rtl/libs -I../rtl/interfaces -I../rtl/core" -Csources_dir -Osources.txt
```

或者手动修改 `esyn.tcl` 中的 `$verilog_files` 列表。

### 步骤 4: 运行综合

```bash
cd /home/kejunwu/vortex/hw/syn/synopsys

# 清理之前的构建
make clean

# 运行 DC 综合
make dc
```

这将执行：
- 分析 (analyze)
- 精化 (elaborate)
- 链接 (link)
- 约束设置
- 编译优化 (compile_ultra)
- 生成报告

### 步骤 5: 查看综合报告

综合完成后，查看报告：

```bash
# 查看综合日志
less vortex_syn.log

# 查看生成的报告
ls -la rpt/

# 面积报告
cat rpt/*area*.rpt

# 时序报告
cat rpt/*timing*.rpt

# 功耗报告
cat rpt/*power*.rpt

# QoR (Quality of Results) 报告
grep -A 20 "Design :" vortex_syn.log
```

### 步骤 6: 检查 DOT8 单元

在报告中搜索你的 DOT8 模块：

```bash
# 在层次结构报告中查找
grep -i "dot8" vortex_syn.log
grep -i "dot8" rpt/*.rpt

# 查看实例化
grep -i "VX_alu_dot8" vortex_syn.log
```

### 步骤 7: 查看生成的网表

```bash
# 查看门级网表
ls -lh Vortex.netlist.v

# 检查 DOT8 逻辑
grep -A 10 "dot8" Vortex.netlist.v
```

### 步骤 8: 时序约束调整

如果时序不满足，编辑 `esyn.tcl` 调整时钟频率：

```tcl
# 降低频率以满足时序
set clk_freq 0.2  # 原来是 0.4 (400MHz -> 200MHz)
```

---

## 方法 3: 快速面积估算（使用 Yosys stat）

如果只想快速评估 DOT8 单元的面积开销：

```bash
cd /home/kejunwu/vortex/hw/syn/yosys

# 只对 DOT8 模块进行综合
cat > synth_dot8_only.sh << 'EOF'
#!/bin/bash
yosys -p "
    read_verilog -sv ../../rtl/core/VX_alu_dot8.sv
    read_verilog -sv ../../rtl/VX_define.vh
    read_verilog -sv ../../rtl/VX_gpu_pkg.vh
    hierarchy -check -top VX_alu_dot8
    proc
    opt
    stat
"
EOF

chmod +x synth_dot8_only.sh
./synth_dot8_only.sh
```

---

## 综合结果对比分析

### 1. 对比基线和 DOT8 版本

为了评估 DOT8 的硬件开销，对比两个版本：

```bash
# 综合没有 DOT8 的基线版本（注释掉 DOT8 代码）
PREFIX=build_baseline NUM_CORES=1 make build > baseline.log 2>&1

# 综合有 DOT8 的版本
PREFIX=build_dot8 NUM_CORES=1 make build > dot8.log 2>&1

# 对比面积
grep "Chip area" baseline.log
grep "Chip area" dot8.log
```

### 2. 提取关键指标

创建一个脚本来提取关键指标：

```bash
cat > extract_metrics.sh << 'EOF'
#!/bin/bash
LOG_FILE=$1
echo "=== Synthesis Metrics for $LOG_FILE ==="
echo ""
echo "Area:"
grep -i "chip area\|total area" $LOG_FILE | head -5
echo ""
echo "Cell Count:"
grep -i "number of cells" $LOG_FILE
echo ""
echo "Critical Path:"
grep -i "critical path\|slack\|wns" $LOG_FILE | head -3
echo ""
echo "Power:"
grep -i "total power\|dynamic power\|leakage power" $LOG_FILE | head -3
EOF

chmod +x extract_metrics.sh
./extract_metrics.sh build_dot8_1c/synth.log
```

### 3. 多核配置对比

```bash
# 生成对比表格
cat > compare_results.sh << 'EOF'
#!/bin/bash
echo "Cores | Area (um²) | Cells | Critical Path (ns)"
echo "------|------------|-------|-------------------"
for cores in 1 2 4; do
    LOG="build_dot8_${cores}c/synth.log"
    if [ -f "$LOG" ]; then
        AREA=$(grep -i "chip area" $LOG | awk '{print $4}')
        CELLS=$(grep -i "number of cells" $LOG | awk '{print $5}')
        CP=$(grep -i "critical path" $LOG | awk '{print $4}')
        echo "$cores | $AREA | $CELLS | $CP"
    fi
done
EOF

chmod +x compare_results.sh
./compare_results.sh
```

---

## 常见问题排查

### 问题 1: 找不到 VX_alu_dot8.sv

**症状**: 综合报错 "Cannot find module VX_alu_dot8"

**解决方案**:
```bash
# 检查文件是否存在
ls -la /home/kejunwu/vortex/hw/rtl/core/VX_alu_dot8.sv

# 检查是否在源文件列表中
cd hw/syn/yosys
make gen-sources PREFIX=build_test NUM_CORES=1
cat build_test/sources.txt | grep dot8
```

### 问题 2: 综合时序不满足

**症状**: "Timing violation" 或 "Setup time violation"

**解决方案**:
```bash
# 方案 1: 降低时钟频率
# 编辑 hw/syn/synopsys/esyn.tcl
# set clk_freq 0.2  # 降到 200MHz

# 方案 2: 增加 DOT8 延迟
# 编辑 hw/rtl/VX_config.vh
# `define LATENCY_DOT8 3  // 从 2 增加到 3
```

### 问题 3: 面积过大

**症状**: Area 或 Cell count 显著增加

**解决方案**:
- 优化 DOT8 实现，使用更高效的乘法器
- 考虑资源共享
- 减少流水线寄存器

### 问题 4: 语法错误

**症状**: "Syntax error" 或 "Parse error"

**解决方案**:
```bash
# 使用 Verilator 进行语法检查
cd /home/kejunwu/vortex
make -C hw/rtl lint

# 或者针对单个文件
verilator --lint-only -Wall \
    -I hw/rtl -I hw/rtl/libs -I hw/rtl/interfaces -I hw/rtl/core \
    hw/rtl/core/VX_alu_dot8.sv
```

---

## 性能评估

综合完成后，评估 DOT8 指令的硬件效率：

### 1. 硬件开销评估

```python
# 计算相对开销
baseline_area = X  # 从 baseline.log 获取
dot8_area = Y      # 从 dot8.log 获取
overhead = (dot8_area - baseline_area) / baseline_area * 100
print(f"DOT8 面积开销: {overhead:.2f}%")
```

### 2. 性能功耗比

```bash
# 从综合报告中提取
# Performance (cycles) 来自仿真
# Power 来自综合报告
# 计算 Performance/Watt
```

### 3. 对比报告生成

创建一个 Markdown 报告：

```bash
cat > DOT8_Synthesis_Report.md << 'EOF'
# DOT8 ASIC 综合报告

## 配置
- 工艺: NanGate 15nm
- 核心数: 1
- 时钟频率: 400 MHz
- DOT8 延迟: 2 cycles

## 综合结果

### 面积
| 版本 | 总面积 (um²) | 单元数 | DOT8 开销 |
|------|-------------|--------|-----------|
| Baseline | XXX | XXX | - |
| With DOT8 | XXX | XXX | X.X% |

### 时序
- 关键路径延迟: X.XX ns
- 时序裕量: X.XX ns
- 满足时序约束: ✅/❌

### 功耗
- 动态功耗: X.XX mW
- 静态功耗: X.XX mW
- 总功耗: X.XX mW

## 结论
DOT8 指令硬件实现的面积开销为 X.X%，时序满足 400MHz 时钟约束...
EOF
```

---

## 下一步

1. **功能验证**: 使用 RTL 仿真验证 DOT8 综合后的正确性
2. **物理设计**: 进行布局布线 (Place & Route)
3. **后仿真**: 提取延迟进行后仿真
4. **FPGA 原型**: 在 FPGA 上验证实际性能

---

## 总结

推荐流程：

**初学者/快速验证**:
```bash
cd hw/syn/yosys
PREFIX=build_dot8_1c NUM_CORES=1 make build
```

**工业级/精确结果**:
```bash
cd hw/syn/synopsys
make dc
```

**完整评估**:
1. 使用 Yosys 快速迭代优化
2. 使用 DC 获得精确的 PPA (Performance, Power, Area) 指标
3. 对比多种配置
4. 生成综合报告

祝你综合顺利！🚀
