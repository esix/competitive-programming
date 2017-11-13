#!/usr/bin/env python3

from math import sqrt

def sqr(x):
    return x * x

def dist(x0, y0, x1, y1):
    return sqrt(sqr(x1 - x0) + sqr(y1 - y0))


n = int(input())

x0, y0 = map(int, input().split(' '))
x1, y1 = map(int, input().split(' '))

s = 0

for i in range(n-2):
    x2, y2 = map(int, input().split(' '))
    a = dist(x0, y0, x1, y1)
    b = dist(x1, y1, x2, y2)
    c = dist(x2, y2, x0, y0)
    p = (a + b + c) / 2
    s += sqrt(p * (p-a) * (p-b) * (p-c))

print("{0:.3f}".format(s))
