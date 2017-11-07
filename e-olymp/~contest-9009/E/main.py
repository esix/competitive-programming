#!/usr/bin/env python3

from math import sqrt, acos

x, y, A, B, C = map(int, input().split(' '))
is_on_line = (A * x + B * y + C == 0)
print ("YES" if is_on_line else "NO")
