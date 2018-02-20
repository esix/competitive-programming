#!/usr/bin/env python3

from math import sqrt

a, b, c = map(int, input().split(' '))

d = b * b - 4 * a * c

if d < 0:
    print ("No roots")
elif d == 0:
    print ("One root:", -b // (2 * a))
else:
    x1 = round((-b - sqrt(d)) / (2 * a))
    x2 = round((-b + sqrt(d)) / (2 * a))
    print ("Two roots:", min(x1, x2), max(x1, x2))
