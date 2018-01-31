#!/usr/bin/env python3

n = int(input())
ts = map(int, input().split(' ')[:n])

result = 0
current = 0

for t in ts:
    if t > 0:
        current += 1
    else:
        current = 0

    result = max(result, current)

print(result)