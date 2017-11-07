#!/usr/bin/env python3

x1, y1, x2, y2, a = map(float, input().split(' '))
dx, dy = x2-x1, y2-y1
t = a / (1 + a)
x = x1 + t * dx
y = y1 + t * dy
print ("{0:.2f} {1:.2f}".format(x, y))
