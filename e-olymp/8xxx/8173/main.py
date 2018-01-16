#!/usr/bin/env python3

from functools import reduce

T = int(input())

def t_best(t1, t2):
    if t1[1] > t2[1]:
        return t1
    if t1[1] < t2[1]:
        return t2
    if t1[0] > t2[0]:
        return t2
    return t1



for t in range(T):
    V = int(input())

    d = {}

    for v in range(V):
        n = int(input())
        d[n] = d[n] + 1 if n in d else 1

    m = reduce(t_best, d.items())
    print (m[0])