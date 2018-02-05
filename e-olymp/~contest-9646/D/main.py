#!/usr/bin/env python3

a, b = map(int, input().split(' '))

def all_different(x):
    d1, d2, d3 = list(str(x))
    return d1 != d2 and d2 != d3 and d1 != d3 

for x in range(a, b+1):
    if all_different(x):
        print(x)
