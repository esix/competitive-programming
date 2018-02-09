#!/usr/bin/env python3
import  math
n, m = map(int, input().split(' '))

if m <= n:
    print (0)
else:
    print (math.factorial(n) % m)
