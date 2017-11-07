#!/usr/bin/env python3

from math import sqrt, floor

a, b, c = map(int, input().split(' '))

d = floor(sqrt(a*a + b*b + c*c))
print(d)