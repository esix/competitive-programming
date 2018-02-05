#!/usr/bin/env python3
from math import sin

a, b, h = map(float, input().split(' '))


def f(x):
    return 3 * sin(x)

x = a
while x <= b:
    y = f(x)
    print("%.3f %.3f" % (x, y))
    x += h