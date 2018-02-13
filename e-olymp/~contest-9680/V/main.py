#!/usr/bin/env python3

n, t = map(int, input().split(' '))
xs = map(int, input().split(' ')[:n])

r = 0
total = 0

for x in xs:
    if total + x > t:
        break
    total += x
    r += 1

print (r)