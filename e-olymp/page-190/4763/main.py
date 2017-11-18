#!/usr/bin/env python3

n, m = map(int, input().split(' '))

mtx = [[0 for j in range(n)] for i in range(n)]

for i in range(m):
    a, b = map(int, input().split(' '))
    mtx[a-1][b-1] = 1
    mtx[b-1][a-1] = 1

for i in range(n):
    print (' '.join(map(str, mtx[i])))
