#!/usr/bin/env python3

x1, y1, x2, y2 = map(int, input().split(' '))
x3, y3, x4, y4 = map(int, input().split(' '))
w, h = map(int, input().split(' '))

def fits(x1, y1, x2, y2):
    rw = x2 - x1
    rh = y2 - y1
    return (w <= rw and h <= rh)


result = fits(x1, y1, x2, y3) or \
         fits(x1, y1, x3, y2) or \
         fits(x1, y4, x2, y2) or \
         fits(x4, y1, x2, y2)

print ("Yes" if result else "No")