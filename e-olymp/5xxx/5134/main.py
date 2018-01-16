#!/usr/bin/env python3

x1, y1, x2, y2 = map(int, input().split(' '))

a1 = y1 - y2
b1 = x2 - x1
c1 = x1 * y2 - x2 * y1

x1, y1, x2, y2 = map(int, input().split(' '))

a2 = y1 - y2
b2 = x2 - x1
c2 = x1 * y2 - x2 * y1


D = a1 * b2 - a2 * b1

if D == 0:
    d1 = a1 * c2 - c1 * a2
    d2 = b1 * c2 - c1 * b2
    is_same = (d1 == 0 and d2 == 0)
    print ("2" if is_same else "0")

else :
    x = -(c1 * b2 - c2 * b1) / D
    y = -(a1 * c2 - a2 * c1) / D
    print ("1")
    print ("{0:.7f} {1:.7f}".format(x, y))
