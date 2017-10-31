#!/usr/bin/env python3

from fractions import gcd

a, b, c, d = map(int, input().split(' '))
e, f = a * d + b * c, b * d
g = gcd(e, f)

num = e // g
den = f // g

if den < 0:
    num = -num
    den = -den

print(num, den)
