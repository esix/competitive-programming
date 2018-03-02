#!/usr/bin/env python3

n, m = map(int, input().split())
a = [input().split(' ')[:m] for i in range(n)]
b = [[a[i][j] for i in range(n-1, -1, -1)] for j in range(m)]

print(m, n)
for bb in b: print(' '.join(bb))