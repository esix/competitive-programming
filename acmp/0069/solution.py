#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

N, A = list(map(int, inp.readline().split(' ')))
R = A / (2 * math.sin(math.pi / N))
r = A / (2 * math.tan(math.pi / N))
answer = "YES" if (R - r) < 1 else "NO"

print(answer)
out.write(answer)
