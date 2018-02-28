#!/usr/bin/env python3

from math import sqrt, acos

x1, y1, x2, y2 = map(int, input().split(' '))
dx, dy = x2-x1, y2-y1
l = sqrt(dx * dx + dy * dy)
print ("{0:.6f}".format(l))
