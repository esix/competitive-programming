#!/usr/bin/env python3

n, m = map(int, input().split(' '))
a = [list(map(int, input().split(' ')[:m])) for i in range(n)]

rows = [1001 for i in range(n)]
cols = [-1001 for j in range(m)]

for i in range(n):
    for j in range(m):
        rows[i] = min(rows[i], a[i][j])
        cols[j] = max(cols[j], a[i][j])

r = 0
for i in range(n):
    for j in range(m):
        if a[i][j] == rows[i] == cols[j]:
            r += 1
print(r)