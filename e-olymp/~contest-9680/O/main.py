#!/usr/bin/env python3

n, m = map(int, input().split(' ')[:2])

A = 0
B = 0

for i in range(n):
    a, b = map(int, input().split(' ')[0:2])
    A += a
    B += b

print ((A // m) + (B // m) + bool(A % m) + bool(B % m))
