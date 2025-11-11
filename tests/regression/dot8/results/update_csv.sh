#!/bin/bash

# Baseline results
echo "warps,threads,instructions,cycles,ipc" > baseline_results.csv
echo "4,4,170408304,43742796,3.895689" >> baseline_results.csv
echo "4,8,170421872,22572989,7.549814" >> baseline_results.csv
echo "8,4,170421936,43056660,3.958085" >> baseline_results.csv
echo "8,8,170449008,22323830,7.635294" >> baseline_results.csv

# Dot8 results
echo "warps,threads,instructions,cycles,ipc" > dot8_results.csv
echo "4,4,86522224,23451642,3.689389" >> dot8_results.csv
echo "4,8,86535792,12133173,7.132165" >> dot8_results.csv
echo "8,4,86535856,22008582,3.931914" >> dot8_results.csv
echo "8,8,86562928,11843665,7.308796" >> dot8_results.csv

echo "CSV files updated with 6 decimal places IPC values"
