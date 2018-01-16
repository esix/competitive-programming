#!/usr/bin/env python3

from itertools import combinations
from functools import reduce


def gcd(*numbers):
    from fractions import gcd
    return reduce(gcd, numbers)


def lcm(*numbers):
    def lcm(a, b):
        return (a * b) // gcd(a, b)
    return reduce(lcm, numbers, 1)


n = int(input())
ts = list(map(int, input().split(' ')))
print (lcm(*ts))
