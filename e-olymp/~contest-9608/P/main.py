#!/usr/bin/env python3

n, m = map(int, input().split(' ')[:2])

results = []

for i in range(m):
    vs = list(map(int, input().split(' ')[:n]))
    m = min(vs)
    M = max(vs)
    vs = [v for v in vs if v != m and v != M]
    results.append(sum(vs) / len(vs))


print(' '.join(map(lambda v: "%.2f" % v, results)))
