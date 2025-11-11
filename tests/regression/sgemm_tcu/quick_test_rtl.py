#!/usr/bin/env python3
"""
Quick test script to verify RTL benchmark functionality
Tests only one configuration per format
"""

import subprocess
import re
import os

# Create results directory
results_dir = "./results_rtl_quick"
os.makedirs(results_dir, exist_ok=True)

dtypes = ["fp16", "bf16", "tf32"]
config = (4, 4)  # Single config for quick test

print("=" * 70)
print("Quick RTL Test (Single Configuration)")
print("=" * 70)

for dtype in dtypes:
    warps, threads = config
    print(f"\nTesting {dtype.upper()} with warps={warps}, threads={threads}")
    
    # Clean
    subprocess.run("make clean > /dev/null 2>&1", shell=True, cwd=".")
    
    # Build
    build_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DITYPE={dtype} -DOTYPE=fp32" make'
    print(f"  Building...")
    subprocess.run(build_cmd, shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, cwd=".")
    
    # Run
    log_file = f"{results_dir}/{dtype}_w{warps}_t{threads}.log"
    run_cmd = f'CONFIGS="-DNUM_CORES=4 -DNUM_WARPS={warps} -DNUM_THREADS={threads} -DEXT_TCU_ENABLE -DTCU_BHF" ../../../ci/blackbox.sh --driver=rtlsim --app=sgemm_tcu --args="-n 256"'
    print(f"  Running...")
    
    with open(log_file, 'w') as f:
        subprocess.run(run_cmd, shell=True, stdout=f, stderr=f, cwd=".")
    
    # Extract
    with open(log_file, 'r') as f:
        content = f.read()
        match = re.search(r'PERF: instrs=(\d+), cycles=(\d+), IPC=([\d.]+)', content)
        if match:
            print(f"  ✓ Success: instrs={match.group(1)}, cycles={match.group(2)}, IPC={match.group(3)}")
        else:
            print(f"  ✗ Failed to extract metrics")

print("\n" + "=" * 70)
print(f"Quick test completed! Logs in {results_dir}/")
print("=" * 70)
