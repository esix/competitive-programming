#!/usr/bin/env python3

n = int(input())

c3 = 0
for i in range(10):
    for j in range(10):
        k = n - i - j
        if 0 <= k <= 9:
            c3 += 1

print(c3*c3)
