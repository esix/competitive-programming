#!/usr/bin/env python3

n = int(input())

if n == 1:
    print (0)
else:
    print (len(bin(n-1)) - 2)
