#!/usr/bin/env python3

n = int(input())

s1 = 0
s2 = 0

for i in range(n):
    v1, v2 = map(int, input().split(' '))
    if v1 > v2:
        s1 += 1
    if v1 < v2:
        s2 += 1

if s1 > s2:
    print ("1")
elif s1 < s2:
    print ("2")
else:
    print ("0")