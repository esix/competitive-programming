#!/usr/bin/env python3

n = int(input())

a = [[0 for j in range(n)] for i in range(n)]

d = 0
y = 0
x = 0

def next():
    global x, y, d
    yy = y + [0, 1, 0, -1][d]
    xx = x + [1, 0, -1, 0][d]
    if 0 <= xx < n and 0 <= yy < n and a[yy][xx] == 0:
        x, y = xx, yy
        return
    d = (d + 1) % 4
    next()


for i in range(1, n*n):
    a[y][x] = str(i)
    next()

a[y][x] = str(n*n)

for l in a:
    print (' '.join(l))