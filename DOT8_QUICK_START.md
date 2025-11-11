# Vortex DOT8 ASIC 综合快速开始指南

## 📋 前提检查

在开始综合之前，确认你已经完成：

✅ 实现了 `hw/rtl/core/VX_alu_dot8.sv`  
✅ 修改了 `hw/rtl/VX_gpu_pkg.vh` (添加 INST_ALU_DOT8)  
✅ 修改了 `hw/rtl/VX_config.vh` (定义 LATENCY_DOT8)  
✅ 修改了 `hw/rtl/core/VX_decode.sv` (解码逻辑)  
✅ 修改了 `hw/rtl/core/VX_alu_unit.sv` (集成 DOT8)  
✅ 测试通过了 SimX 或 RTLsim 仿真

## 🚀 最快速的方法（推荐新手）

### 步骤 1: 进入综合目录

```bash
cd /home/kejunwu/vortex/hw/syn
```

### 步骤 2: 运行自动化综合脚本

```bash
# 使用 Yosys 开源工具，单核配置
./run_dot8_synthesis.sh yosys 1
```

这个命令会：
- ✅ 自动检查 RTL 文件
- ✅ 生成源文件列表
- ✅ 转换 SystemVerilog 到 Verilog
- ✅ 执行综合
- ✅ 提取关键指标
- ✅ 生成综合报告

**预计时间**: 5-15 分钟（取决于你的机器性能）

### 步骤 3: 查看结果

综合完成后，会在当前目录生成一个时间戳命名的结果目录：

```bash
# 进入结果目录
cd dot8_synthesis_results_YYYYMMDD_HHMMSS/

# 查看所有生成的文件
ls -la

# 查看综合日志
less yosys_synth_1c.log

# 查看综合报告
cat DOT8_Synthesis_Report_*.md
```

## 📊 多核心配置对比

如果你想对比不同核心数的综合结果：

```bash
cd /home/kejunwu/vortex/hw/syn

# 1 核心
./run_dot8_synthesis.sh yosys 1

# 2 核心
./run_dot8_synthesis.sh yosys 2

# 4 核心
./run_dot8_synthesis.sh yosys 4
```

然后使用提取工具生成对比表格：

```bash
# 假设你的结果在多个目录中
./extract_synthesis_metrics.sh --compare dot8_synthesis_results_YYYYMMDD_HHMMSS/
```

## 🔧 手动综合步骤（更灵活）

如果你想更精细地控制综合过程：

### 使用 Yosys

```bash
cd /home/kejunwu/vortex/hw/syn/yosys

# 步骤 1: 生成源文件列表
PREFIX=build_dot8_1c NUM_CORES=1 make gen-sources

# 步骤 2: 检查 DOT8 模块是否被包含
cat build_dot8_1c/sources.txt | grep -i dot8

# 步骤 3: SV 转 V
PREFIX=build_dot8_1c NUM_CORES=1 make sv2v

# 步骤 4: 只做 elaboration（快速检查语法）
PREFIX=build_dot8_1c NUM_CORES=1 make elaborate

# 步骤 5: 完整综合
PREFIX=build_dot8_1c NUM_CORES=1 make synthesis

# 或者一次性完成所有步骤
PREFIX=build_dot8_1c NUM_CORES=1 make build
```

### 使用 Synopsys Design Compiler

```bash
cd /home/kejunwu/vortex/hw/syn

# 使用 DC（需要 DC 许可证）
./run_dot8_synthesis.sh synopsys 1
```

或者手动：

```bash
cd synopsys

# 清理旧构建
make clean

# 运行 DC 综合
make dc

# 查看报告目录
ls -la rpt/
```

## 📈 提取和分析结果

使用提供的指标提取工具：

```bash
cd /home/kejunwu/vortex/hw/syn

# 交互式模式
./extract_synthesis_metrics.sh

# 或者直接命令行
./extract_synthesis_metrics.sh --yosys build_dot8_1c/synth.log 1
./extract_synthesis_metrics.sh --compare dot8_synthesis_results_*/
./extract_synthesis_metrics.sh --find-dot8 yosys/build_dot8_1c/synth.log
```

## 🔍 关键指标解读

### 面积 (Area)
- **单位**: um² (微米²)
- **含义**: 芯片上的物理面积
- **越小越好**: 意味着更低的成本

### 单元数 (Cells)
- **含义**: 使用的标准单元数量
- **包括**: 逻辑门、触发器、缓冲器等

### 时序裕量 (Slack)
- **正值**: 满足时序要求 ✅
- **负值**: 违反时序要求 ❌
- **目标**: 尽可能大的正值

### 功耗 (Power)
- **动态功耗**: 电路翻转时消耗的能量
- **静态功耗**: 泄漏电流导致的能量损耗
- **越小越好**: 意味着更长的电池寿命

## ⚡ 常见问题快速解决

### 问题 1: "Cannot find VX_alu_dot8"

```bash
# 检查文件是否存在
ls -la /home/kejunwu/vortex/hw/rtl/core/VX_alu_dot8.sv

# 如果不存在，你需要先创建这个文件
```

### 问题 2: 综合时间过长

```bash
# 使用单核配置进行快速测试
./run_dot8_synthesis.sh yosys 1

# 或者先做 elaborate 而不是完整综合
cd yosys
PREFIX=test NUM_CORES=1 make elaborate
```

### 问题 3: 时序违例

编辑 `hw/rtl/VX_config.vh`，增加 DOT8 延迟：

```verilog
`define LATENCY_DOT8 3  // 从 2 改为 3
```

### 问题 4: 看不到 DOT8 在综合中

```bash
# 搜索 DOT8 相关内容
cd yosys/build_dot8_1c
grep -i "dot8" synth.log
grep -i "VX_alu_dot8" sources.txt
```

## 📁 生成的重要文件说明

### Yosys 综合

| 文件 | 说明 |
|------|------|
| `sources.txt` | 所有源文件列表 |
| `project.v` | 转换后的 Verilog 代码 |
| `synth.log` | 综合日志和统计信息 |
| `*.json` | Yosys 内部表示 |

### Synopsys DC 综合

| 文件 | 说明 |
|------|------|
| `vortex_syn.log` | DC 综合主日志 |
| `Vortex.netlist.v` | 门级网表 |
| `Vortex.sdc` | 时序约束 |
| `rpt/*.rpt` | 详细报告（面积、时序、功耗） |

## 🎯 完整综合评估流程

### 第一步：基线综合

```bash
cd /home/kejunwu/vortex/hw/syn
# 综合原始 Vortex（不含 DOT8）
git stash  # 暂存你的 DOT8 修改
./run_dot8_synthesis.sh yosys 1
mv dot8_synthesis_results_* baseline_results/
git stash pop  # 恢复你的修改
```

### 第二步：DOT8 综合

```bash
# 综合包含 DOT8 的版本
./run_dot8_synthesis.sh yosys 1
```

### 第三步：对比分析

```bash
# 计算 DOT8 的硬件开销
./extract_synthesis_metrics.sh --compare baseline_results/
./extract_synthesis_metrics.sh --compare dot8_synthesis_results_*/

# 手动对比面积
echo "基线面积: $(grep 'Chip area' baseline_results/yosys_synth_1c.log | awk '{print $4}')"
echo "DOT8 面积: $(grep 'Chip area' dot8_synthesis_results_*/yosys_synth_1c.log | awk '{print $4}')"
```

### 第四步：多配置测试

```bash
# 测试不同核心数
for cores in 1 2 4; do
    ./run_dot8_synthesis.sh yosys $cores
    sleep 10
done
```

### 第五步：生成最终报告

创建一个完整的 Markdown 报告，包含：
- 硬件开销百分比
- 多核心扩展性
- 时序满足情况
- 功耗分析
- DOT8 性能加速比 vs 硬件成本

## 💡 优化建议

如果你的 DOT8 综合结果不理想：

### 减少面积
1. 复用现有的乘法器资源
2. 使用流水线减少组合逻辑深度
3. 考虑时分复用

### 改善时序
1. 增加流水线级数
2. 平衡各级的逻辑深度
3. 使用寄存器重定时

### 降低功耗
1. 使用门控时钟
2. 降低翻转率
3. 使用低功耗标准单元库

## 📚 参考文档

- [完整综合指南](DOT8_ASIC_SYNTHESIS_GUIDE.md)
- [Vortex 官方文档](docs/index.md)
- [Assignment 6 说明](https://github.com/vortexgpgpu/vortex_tutorials/blob/main/Exercises/assignment6.md)

## ✅ 检查清单

在提交你的综合结果前，确保：

- [ ] 综合无错误完成
- [ ] 时序满足约束（slack > 0）
- [ ] DOT8 模块在网表中可见
- [ ] 生成了综合报告
- [ ] 记录了关键指标（面积、功耗、时序）
- [ ] 对比了基线和 DOT8 版本
- [ ] 测试了多核心配置

---

## 🆘 获取帮助

如果遇到问题：

1. 检查 RTL 语法：`cd /home/kejunwu/vortex && make -C hw/rtl lint`
2. 查看详细日志：`less dot8_synthesis_results_*/yosys_synth_*.log`
3. 搜索错误信息：`grep -i "error\|warning" *.log`

祝综合顺利！ 🎉
