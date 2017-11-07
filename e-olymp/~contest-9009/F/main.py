#!/usr/bin/env python3

x, y, x1, y1, x2, y2 = map(int, input().split(' '))
dx, dy = x2-x1, y2-y1

t = (x - x1) / dx if dx != 0 else (y - y1) / dy

is_on_ray = (t >= 0 and x == x1 + dx * t and y == y1 + dy * t)

print ("YES" if is_on_ray else "NO")
