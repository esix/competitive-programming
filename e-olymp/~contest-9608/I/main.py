#!/usr/bin/env python3

n = int(input())

d = {}

for i in range(n):
    income, outgo = map(int, input().split(' ')[:2])
    if income not in d: d[income] = [0, 0]
    if outgo not in d: d[outgo] = [0, 0]
    d[income][0] += 1
    d[outgo][1] += 1

ks = sorted(d.keys())
result = 0
count = 0

for k in ks:
    pair = d[k]
    count += d[k][0]
    result = max(result, count)
    count -= d[k][1]


print(result)
