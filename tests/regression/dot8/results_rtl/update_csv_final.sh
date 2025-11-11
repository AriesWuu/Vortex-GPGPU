#!/bin/bash

# Baseline RTL results
echo "warps,threads,instructions,cycles,ipc" > baseline_results.csv
echo "4,4,170408308,44003937,3.872570" >> baseline_results.csv
echo "4,8,170421876,22854194,7.456919" >> baseline_results.csv
echo "8,4,170421940,49031530,3.475762" >> baseline_results.csv
echo "8,8,170449012,25098979,6.791073" >> baseline_results.csv

# Dot8 RTL results
echo "warps,threads,instructions,cycles,ipc" > dot8_results.csv
echo "4,4,86522228,22622286,3.824646" >> dot8_results.csv
echo "4,8,86535796,12191855,7.097836" >> dot8_results.csv
echo "8,4,86535860,24252147,3.568173" >> dot8_results.csv
echo "8,8,86562932,13007633,6.654780" >> dot8_results.csv

echo "RTL CSV files updated with 6 decimal places IPC values"
