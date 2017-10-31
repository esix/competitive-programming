#!/usr/bin/python3

from itertools import combinations
from functools import reduce


def gcd(*numbers):
    from fractions import gcd
    return reduce(gcd, numbers)

n = int(input())
ns = [int(input()) for i in range(n)]

min_len = gcd(*ns)
k = sum(map(lambda l: l // min_len, ns))
print (k)