#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
ws = list(map(int,inp.readline().split(' ')[0:n]))

w0 = ws[0]
ws = ws[1:]

min_d = -1

for i in range(2**len(ws)):
    a1 = w0
    a2 = 0
    for w in ws:
        if i & 1 == 1:
            a1 += w
        else:
            a2 += w
        i = i >> 1
    d = a1 - a2
    if d < 0: d = -d
    if min_d == -1 or d < min_d:
        min_d = d


answer = str(min_d)

print(answer)
out.write(answer)
