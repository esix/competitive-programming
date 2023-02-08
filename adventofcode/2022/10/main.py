#!/usr/bin/env python3

import sys


cycle_idx = 1
x = 1
result = 0

crt_row = []

def run_cycle():
    global cycle_idx, x, result, crt_row
    if (cycle_idx - 20) % 40 == 0:
        result += cycle_idx * x
    cycle_idx += 1
    #
    if len(crt_row) == 40: 
        print (''.join(crt_row))
        crt_row = []
    if -1 <= x - len(crt_row) <= 1:
        crt_row.append('#')
    else:
        crt_row.append('.')


for line in sys.stdin:
    line = line.strip()
    if line == "noop":
        run_cycle()
    else:
        d = int(line.split(' ')[1])
        run_cycle()
        run_cycle()
        x += d

print (''.join(crt_row))
print(result)
