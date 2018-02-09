#!/usr/bin/env python3

l, k = map(int, input().split(' '))

n = 0
l /= k

while l > 1:
    n += 1
    l /= k

print(n)
