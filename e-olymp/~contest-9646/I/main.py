#!/usr/bin/env python3

import math

def f(x):
    return math.sqrt(x) + 2*x + math.sin(x)


while True:
    try:
        x = float(input())
        print("%.4f" % f(x))
    except EOFError as err:
        break
