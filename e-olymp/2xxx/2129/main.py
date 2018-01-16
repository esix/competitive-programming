#!/usr/bin/env python3

from math import atan2, pi

x, y = map(int, input().split(' '))
a = atan2(y, x)
if a < 0:
    a += 2 * pi

print ("{0:.6f}".format(a))
