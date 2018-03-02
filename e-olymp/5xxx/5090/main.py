#!/usr/bin/env python3

n = int(input())
a = [list(map(int, input().split(' ')[:n])) for i in range(n)]

cols = [0 for j in range(n)]
rows = [0 for i in range(n)]

for i in range(n):
    for j in range(n):
        rows[i] += a[i][j]
        cols[j] += a[i][j]

i = rows.index(max(rows))
j = cols.index(min(cols))

print(a[i][j])