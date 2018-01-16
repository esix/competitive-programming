#!/usr/bin/env python3

from fractions import gcd

n, d = map(int, input().split(' '))
g = gcd(n, d)

print (n // g, d // g)
