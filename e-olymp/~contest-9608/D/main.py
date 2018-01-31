#!/usr/bin/env python3

n = int(input())
a = map(float, input().split(' ')[:n])
m = min(a)

print (2 * m)