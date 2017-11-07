#!/usr/bin/env python3

from math import sqrt, acos

x1, y1, x2, y2 = map(int, input().split(' '))
l1 = sqrt(x1 * x1 + y1 * y1)
l2 = sqrt(x2 * x2 + y2 * y2)

scalar_mul = x1 * x2 + y1 * y2

cos_a = scalar_mul / (l1 * l2)
a = acos(cos_a)

print ("{0:.6f}".format(a))
