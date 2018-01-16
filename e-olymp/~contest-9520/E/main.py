#!/usr/bin/python3

from itertools import combinations
from functools import reduce


def gcd(*numbers):
    from fractions import gcd
    return reduce(gcd, numbers)

while True:
    ns = sorted([int(i) for i in input().split(' ')][:-1])
    if len(ns) == 0:
        break
    ds = [ns[i+1] - ns[i] for i in range(len(ns) - 1)]
    print (gcd(*ds))
