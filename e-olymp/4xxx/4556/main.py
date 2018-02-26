#!/usr/bin/env python3

from math import floor

T = int(input())

for t in range(T):
    n = int(input())
    print(floor(n * (n+2) * (2*n+1) // 8))
