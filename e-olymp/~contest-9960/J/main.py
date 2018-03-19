#!/usr/bin/env python3

n, m = map(int, input().split(' '))

edges = []
for i in range(m):
    a, b = map(int, input().split())
    a, b = min(a, b), max(a, b)
    edges.append((a, b))

edges = set(edges)
print ("YES" if len(edges) == n * (n - 1) // 2 else "NO")