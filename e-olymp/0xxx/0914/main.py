#!/usr/bin/env python3

n = int(input())
a = map(float, input().split(' ')[:n])
a = map(abs, a)

print (max(a))