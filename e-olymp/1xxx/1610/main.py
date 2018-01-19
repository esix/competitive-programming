#!/usr/bin/env python3

n, m = map(int, input().split(' '))
r = m // n
if m % n != 0:
    r += 1
print(r)