#!/usr/bin/env python3

T = int(input())


for t in range(T):
    ds = [True for i in range(32)]
    n = int(input())
    for i in range(n):
        a, b = map(int, input().split(' '))
        for j in range(len(ds)):
            ds[j] = ds[j] and (a <= j <= b)
    print("YES" if True in ds else "NO")
