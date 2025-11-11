#!/usr/bin/env python3

import subprocess
import re
import csv
import os
import time

# Create results directory
results_dir = "./results_rtl"
os.makedirs(results_dir, exist_ok=True)

# Test configurations
dtypes = ["fp16", "bf16", "tf32"]
configs = [
    (4, 4),
    (4, 8),
    (8, 4),
    (8, 8),
]

print("=" * 70)
print("Assignment 9 Step 5: RTL Benchmark")
print("Testing fp16, bf16, tf32 formats")
print("Matrix size: N=256")
print("GPU cores: 4")
print("Driver: rtlsim (RTL simulator)")
print("=" * 70)
print()

# Results storage
results = []

# Run benchmarks
for dtype in dtypes:
    print(f"Testing format: {dtype.upper()}")
    print("-" * 70)
    
    for warps, threads in configs:
        print(f"  Config: warps={warps}, threads={threads}")
        
        # Clean
        print(f"    Cleaning...")
        subprocess.run("make clean", shell=True, 
                      stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, 
                      cwd=".")
        
        # Build
        build_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DITYPE={dtype} -DOTYPE=fp32" make'
        print(f"    Building...")
        result = subprocess.run(build_cmd, shell=True,
                      stdout=subprocess.PIPE, stderr=subprocess.PIPE,
                      cwd=".", text=True)
        
        if result.returncode != 0:
            print(f"    ERROR: Build failed!")
            print(f"    {result.stderr}")
            continue
        
        # Run test on RTL simulator
        log_file = f"{results_dir}/{dtype}_w{warps}_t{threads}.log"
        run_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DEXT_TCU_ENABLE -DTCU_BHF" ./ci/blackbox.sh --driver=rtlsim --app=sgemm_tcu --args="-m 256 -n 256 -k 256"'
        print(f"    Running on RTL simulator (this may take several minutes)...")
        
        start_time = time.time()
        with open(log_file, 'w') as f:
            result = subprocess.run(run_cmd, shell=True, stdout=f, stderr=f, 
                                  cwd="../../..", text=True)
        elapsed = time.time() - start_time
        
        if result.returncode != 0:
            print(f"    ERROR: Test run failed!")
            results.append({
                'Format': dtype,
                'Warps': warps,
                'Threads': threads,
                'Instructions': 'FAILED',
                'Cycles': 'FAILED',
                'IPC': 'FAILED',
                'Runtime': f'{elapsed:.1f}s'
            })
            continue
        
        # Extract metrics
        with open(log_file, 'r') as f:
            content = f.read()
            match = re.search(r'PERF: instrs=(\d+), cycles=(\d+), IPC=([\d.]+)', content)
            
            if match:
                instrs = int(match.group(1))
                cycles = int(match.group(2))
                ipc = float(match.group(3))
                print(f"    Results: instrs={instrs}, cycles={cycles}, IPC={ipc:.6f}")
                print(f"    Runtime: {elapsed:.1f} seconds")
                results.append({
                    'Format': dtype,
                    'Warps': warps,
                    'Threads': threads,
                    'Instructions': instrs,
                    'Cycles': cycles,
                    'IPC': ipc,
                    'Runtime': f'{elapsed:.1f}s'
                })
            else:
                print(f"    Warning: Could not extract metrics")
                results.append({
                    'Format': dtype,
                    'Warps': warps,
                    'Threads': threads,
                    'Instructions': 'N/A',
                    'Cycles': 'N/A',
                    'IPC': 'N/A',
                    'Runtime': f'{elapsed:.1f}s'
                })
        
        print()
    print()

# Save to CSV
csv_file = f"{results_dir}/benchmark_results.csv"
with open(csv_file, 'w', newline='') as f:
    writer = csv.DictWriter(f, fieldnames=['Format', 'Warps', 'Threads', 'Instructions', 'Cycles', 'IPC', 'Runtime'])
    writer.writeheader()
    writer.writerows(results)

print("=" * 70)
print("RTL Benchmark completed!")
print(f"Results saved to: {results_dir}/")
print(f"CSV file: {csv_file}")
print(f"Log files: {results_dir}/*.log")
print("=" * 70)
print()
print("Next step: Run generate_plots_rtl.py to create visualization graphs")
