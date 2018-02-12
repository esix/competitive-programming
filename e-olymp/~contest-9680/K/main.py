#!/usr/bin/env python3

d = {0: 0, 1 : 0}


n = int(input())


for i in range(n):
    v = int(input())
    d[v] += 1

print(min(d[0], d[1]))