#!/usr/bin/env python3

from math import sqrt

x1, y1 = map(int, input().split(' '))
x2, y2, z2 = map(int, input().split(' '))

def sqr(x):
    return x * x

l = sqrt(sqr(x2 - x1) + sqr(y2 - y1) + sqr(z2 - 0))

print("{0:.3f}".format(1 / l))