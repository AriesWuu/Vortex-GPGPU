#!/bin/bash

# Extract IPC from RTL log files
echo "Extracting from baseline logs..."
for f in baseline_w4_t4.log baseline_w4_t8.log baseline_w8_t4.log baseline_w8_t8.log; do
  if [ -f "$f" ]; then
    echo "$f:"
    grep "PERF: instrs=" "$f" | grep -v "core" | tail -1
  fi
done

echo ""
echo "Extracting from dot8 logs..."
for f in dot8_w4_t4.log dot8_w4_t8.log dot8_w8_t4.log dot8_w8_t8.log; do
  if [ -f "$f" ]; then
    echo "$f:"
    grep "PERF: instrs=" "$f" | grep -v "core" | tail -1
  fi
done
