#!/usr/bin/env python3

n, m = map(int, input().split(' '))

a = [list(map(int, input().split(' ')[:m])) for i in range(n)]
input()
b = [list(map(int, input().split(' ')[:m])) for i in range(n)]

r = 0
for i in range(n):
    for j in range(m):
        r += a[i][j] * b[i][j]

print(r)