# IPC Precision Update - October 26, 2025

## Summary
Updated all IPC comparison plots to display 6 decimal places instead of 3 decimal places for better precision.

## Changes Made

### 1. Modified Scripts
- `run_comparison.sh`: Changed IPC format from `%.3f` to `%.6f` (line 61)
- `run_rtl_comparison.sh`: Changed IPC format from `%.3f` to `%.6f` (line 67)

### 2. Updated CSV Files (without re-running simulations)

#### SimX Results (`results/baseline_results.csv` and `results/dot8_results.csv`)
Extracted IPC values from existing log files:

**Baseline (int8 sgemm):**
- W4-T4: 3.895689 (was 3.896)
- W4-T8: 7.549814 (was 7.550)
- W8-T4: 3.958085 (was 3.958)
- W8-T8: 7.635294 (was 7.635)

**Dot8 Accelerated:**
- W4-T4: 3.689389 (was 3.689)
- W4-T8: 7.132165 (was 7.132)
- W8-T4: 3.931914 (was 3.932)
- W8-T8: 7.308796 (was 7.309)

#### RTL Results (`results_rtl/baseline_results.csv` and `results_rtl/dot8_results.csv`)
Extracted IPC values from existing RTL log files in `results_rtl/logs/`:

**Baseline (int8 sgemm):**
- W4-T4: 3.872570 (was 3.873)
- W4-T8: 7.456919 (was 7.457)
- W8-T4: 3.475762 (was 3.476)
- W8-T8: 6.791073 (was 6.791)

**Dot8 Accelerated:**
- W4-T4: 3.824646 (was 3.825)
- W4-T8: 7.097836 (was 7.098)
- W8-T4: 3.568173 (was 3.568)
- W8-T8: 6.654780 (was 6.655)

### 3. Regenerated Plots
All plots regenerated with updated IPC values:

#### SimX Plots (results/plots/)
- ✓ instruction_comparison.png
- ✓ cycles_comparison.png
- ✓ speedup_comparison.png
- ✓ ipc_comparison.png (now shows 6 decimal places)

#### RTL Plots (results_rtl/plots/)
- ✓ rtl_instruction_comparison.png
- ✓ rtl_cycles_comparison.png
- ✓ rtl_speedup_comparison.png
- ✓ rtl_ipc_comparison.png (now shows 6 decimal places)

## Data Source
All IPC values extracted from original simulation log files:
- SimX: `results/baseline_w*_t*.log` and `results/dot8_w*_t*.log`
- RTL: `results_rtl/logs/baseline_rtl_w*_t*.log` and `results_rtl/logs/dot8_rtl_w*_t*.log`

Used `grep "PERF: instrs=" | grep -v "core" | tail -1` to extract final aggregate performance metrics.

## Result
IPC comparison plots now display full precision (6 decimal places) for accurate performance analysis, e.g., 3.895689 instead of 3.896.
