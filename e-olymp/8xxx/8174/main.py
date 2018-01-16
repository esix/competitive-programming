#!/usr/bin/env python3

def is_grow(d1, d2):
    return d1[0] < d2[0] and d1[1] > d2[1]


T = int(input())

for t in range(T):
    n = int(input())
    ds = [tuple(map(float, input().split(' '))) for i in range(n)]

    vs = [1 for i in range(n)]

    for i in range(n):
        for k in range(i):
            if is_grow(ds[k], ds[i]):
                vs[i] = max(vs[i], vs[k] + 1)

    print(max(vs))
