#!/usr/bin/env python3

import math


while True:
    a = int(input())
    if a == 0:
        break

    s = str(a)
    r = 0

    k = len(s)
    for d in s:
        r += int(d) * math.factorial(k)
        k -= 1

    print(r)
