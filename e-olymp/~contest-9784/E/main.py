#!/usr/bin/env python3

n, m, y, x = map(int, input().split(' '))
y -= 1
x -= 1
is_rev = y % 2 != 0

print (y * m + ((m - x - 1) if is_rev else x))
