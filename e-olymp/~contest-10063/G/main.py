#!/usr/bin/env python3

a = int(input())

r = 0
for b in range(100):
    c = a - b
    if 0 <= c <= 99:
        r += 1

print(r)
