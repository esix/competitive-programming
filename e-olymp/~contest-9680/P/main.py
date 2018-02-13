#!/usr/bin/env python3

from fractions import gcd

def lcm(a, b):
    return (a * b) // gcd(a, b)

a, b, n = map(int, input().split(' '))

m = a * b
print(lcm(m, n) // m)
