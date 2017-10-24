#!/usr/bin/python3

from itertools import combinations
from math import floor, ceil
from functools import reduce


def gcd(*numbers):
    from fractions import gcd
    return reduce(gcd, numbers)


def lcm(*numbers):
    def lcm(a, b):
        return (a * b) // gcd(a, b)
    return reduce(lcm, numbers, 1)


while True:
    [n, t] = map(int, input().split(' '))
    if n == 0 and t == 0:
        break

    ms = [int(input()) for i in range(n)]
    ts = [int(input()) for i in range(t)]

    hs = [lcm(*c) for c in combinations(ms, 4)]

    for t in ts:
        lower = max([floor(t / h) * h for h in hs])
        higher = min([ceil(t / h) * h for h in hs])
        print (lower, higher)


