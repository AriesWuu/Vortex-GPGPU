#!/usr/bin/env python3

import subprocess
import re
import csv
import os

# Create results directory
results_dir = "./results"
os.makedirs(results_dir, exist_ok=True)

# Test configurations
dtypes = ["fp16", "bf16", "tf32"]
configs = [
    (4, 4),
    (4, 8),
    (8, 4),
    (8, 8),
]

print("=" * 50)
print("Assignment 8 Step 5: Benchmark")
print("Testing fp16, bf16, tf32 formats")
print("Matrix size: N=256")
print("GPU cores: 4")
print("=" * 50)
print()

# Results storage
results = []

# Run benchmarks
for dtype in dtypes:
    print(f"Testing format: {dtype}")
    print("-" * 50)
    
    for warps, threads in configs:
        print(f"  Config: warps={warps}, threads={threads}")
        
        # Clean
        subprocess.run("make clean", shell=True, 
                      stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, 
                      cwd=".")
        
        # Build
        build_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DITYPE={dtype} -DOTYPE=fp32" make'
        print(f"    Building...")
        subprocess.run(build_cmd, shell=True,
                      stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
                      cwd=".")
        
        # Run test
        log_file = f"{results_dir}/{dtype}_w{warps}_t{threads}.log"
        run_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DEXT_TCU_ENABLE" ../../../ci/blackbox.sh --driver=simx --app=sgemm_tcu --args="-m 256 -n 256 -k 256"'
        print(f"    Running...")
        
        with open(log_file, 'w') as f:
            subprocess.run(run_cmd, shell=True, stdout=f, stderr=f, cwd=".")
        
        # Extract metrics
        with open(log_file, 'r') as f:
            content = f.read()
            match = re.search(r'PERF: instrs=(\d+), cycles=(\d+), IPC=([\d.]+)', content)
            
            if match:
                instrs = int(match.group(1))
                cycles = int(match.group(2))
                ipc = float(match.group(3))
                print(f"    Results: instrs={instrs}, cycles={cycles}, IPC={ipc}")
                results.append({
                    'Format': dtype,
                    'Warps': warps,
                    'Threads': threads,
                    'Instructions': instrs,
                    'Cycles': cycles,
                    'IPC': ipc
                })
            else:
                print(f"    Warning: Could not extract metrics")
                results.append({
                    'Format': dtype,
                    'Warps': warps,
                    'Threads': threads,
                    'Instructions': 'N/A',
                    'Cycles': 'N/A',
                    'IPC': 'N/A'
                })
        
        print()
    print()

# Save to CSV
csv_file = f"{results_dir}/benchmark_results.csv"
with open(csv_file, 'w', newline='') as f:
    writer = csv.DictWriter(f, fieldnames=['Format', 'Warps', 'Threads', 'Instructions', 'Cycles', 'IPC'])
    writer.writeheader()
    writer.writerows(results)

print("=" * 50)
print("Benchmark completed!")
print(f"Results saved to: {results_dir}/")
print(f"CSV file: {csv_file}")
print("=" * 50)
