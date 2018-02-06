#!/usr/bin/env python3

from math import sqrt, sin, exp, ceil, log


def f(x):
    return sin(x) + sqrt(log(3*x, 4)) + ceil(3*exp(x))


while True:
    try:
        x = float(input())
        print("%.6f" % f(x))
    except EOFError as err:
        break
    except ValueError as err:
        break
