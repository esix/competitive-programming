#!/usr/bin/env python3

import math

def f(x, y):
    return x**2 + math.sin(x*y) - y**2


while True:
    try:
        x, y = map(float, input().split(' '))
        print("%.4f" % f(x, y))
    except EOFError as err:
        break
