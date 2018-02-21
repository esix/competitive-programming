#!/usr/bin/env python3

a, b, n = map(int, input().split(' '))

if n == 0:
    a = 0

r = a + b * ((n // 60) + bool(n % 60))
print(r)
