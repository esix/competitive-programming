#!/usr/bin/env python3

T = int(input())

for t in range(T):
    n, d = map(int, input().split(' '))

    r = 0

    for i in range(n):
        v, f, c = map(int, input().split(' '))
        max_time = f / c
        max_dist = max_time * v

        if max_dist >= d:
            r += 1

    print(r)

