#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


s, p = map(int,inp.readline().split(' ')[0:2])

x = int(math.sqrt(s*s - 4*p) + s) // 2
y = s - x

if x > y:
    x, y = y, x

answer = str(x) + ' ' + str(y)


print(answer)
out.write(answer)
