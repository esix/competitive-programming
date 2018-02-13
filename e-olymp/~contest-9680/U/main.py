#!/usr/bin/env python3

n = int(input())

for i in range(n):
    x = int(input())
    print (x, "is", "even" if x % 2 == 0 else "odd")
