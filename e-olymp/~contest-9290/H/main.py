#!/usr/bin/env python3

a = list(input())
n = len(a)
d = [0 for i in range(n)]

# longest subsequency

for i in range(n):
    d[i] = 1
    for j in range(i):
        if a[j] < a[i]:
            d[i] = max(d[i], 1 + d[j])

max_seq = max(d)
print(26 - max_seq)
