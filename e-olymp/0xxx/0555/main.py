#!/usr/bin/env python3

n = int(input())
x = list(map(int, input().split(' ')[:n]))
idxs = sorted(range(n), key=lambda i: x[i])

r = 0
for i in range(n-1):
    if x[idxs[i+1]] - x[idxs[i]] < x[idxs[r+1]] - x[idxs[r]]:
        r = i

print(x[idxs[r+1]] - x[idxs[r]])
print(idxs[r+1] + 1, idxs[r] + 1)