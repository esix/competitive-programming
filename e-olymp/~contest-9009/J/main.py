#!/usr/bin/env python3

x1, y1, r1 = map(int, input().split(' '))
x2, y2, r2 = map(int, input().split(' '))

if x1 == x2 and y1 == y2:
    print ("{0} {1}".format(x1, y1))
    print ("{0} {1}".format(x1 + 1, y1))
else:
    print ("{0} {1}".format(x1, y1))
    print ("{0} {1}".format(x2, y2))