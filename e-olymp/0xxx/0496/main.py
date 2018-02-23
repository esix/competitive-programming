#!/usr/bin/env python3

n = int(input())

for i in range(n):
    a, b = input().split(' ')
    a = sorted(a.lower())
    b = sorted(b.lower())
    print ("Yes" if a == b else "No")
