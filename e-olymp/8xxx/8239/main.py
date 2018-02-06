#!/usr/bin/env python3

def f(x):
    return x*x*x + 2*x*x - 3


while True:
    try:
        x = float(input())
        print("%.4f" % f(x))
    except EOFError as err:
        break
