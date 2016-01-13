#!/usr/bin/env python3
import math
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

x1, y1 = map(int, inp.readline().split(' ')[0:2])
x2, y2 = map(int, inp.readline().split(' ')[0:2])
r = int(inp.readline())
s = int(inp.readline())

dist = math.sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))
d = dist / 2

S = 2 * math.pi * r*r
if d < r:
    theta = 2 * math.acos(d / r)
    S -= r*r * (theta - math.sin(theta))


answer = "YES" if S > s else "NO"
print(answer)
out.write(answer)
