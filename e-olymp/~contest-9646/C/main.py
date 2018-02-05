#!/usr/bin/env python3

x, y, z = map(float, input().split(' '))
r = min(max(x,y), max(y,z), x+y+z)
print("%.2f" % r)