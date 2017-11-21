#!/usr/bin/env python3

n, m = map(int, input().split(' '))

rs = [0 for i in range(n)]

for i in range(m):
    a, b = map(int, input().split(' '))
    rs[a-1] += 1
    rs[b-1] += 1

print ('\n'.join(map(str, rs)))
