#!/usr/bin/env python3

b, g, k = map(int, input().split(' '))

r = 0

r += b // k 
if b % k != 0:
    r += 1

r += g // k 
if g % k != 0:
    r += 1

print(r)
