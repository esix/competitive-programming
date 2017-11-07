#!/usr/bin/env python3

x0, y0, r = map(int, input().split(' '))
x, y = map(int, input().split(' '))

x -= x0
y -= y0

is_in_circle = (x * x + y * y <= r * r)

print ("YES" if is_in_circle else "NO")
