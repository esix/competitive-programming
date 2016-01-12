#!/usr/bin/env python3

import re

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, q = re.split('\s+', inp.readline())[0:2]
n = int(n)
q = float(q)

answer = "Yes"

for i in range(n):
    ax, ay, bx, by = map(int, re.split('\s+', inp.readline())[0:4])
    a = (ax*ax + ay*ay)
    b = (bx*bx + by*by)
    if b > q*q * a:
        answer = "No"
        break

print(answer)
out.write(answer)
