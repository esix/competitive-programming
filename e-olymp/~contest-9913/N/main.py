#!/usr/bin/env python3

T = int(input())

for t in range(T):
    n = int(input())
    a = set([input() for i in range(n)])
    print(len(a))