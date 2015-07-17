#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = inp.readline().strip()
k = int(inp.readline())

if k > 0:
    answer = s * k
else:
    answer = s[:len(s) // (-k)]
    if len(s) % k != 0 or answer * (-k) != s:
        answer = "NO SOLUTION"

print(answer)
out.write(answer)
