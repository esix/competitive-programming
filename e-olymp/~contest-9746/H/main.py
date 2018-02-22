#!/usr/bin/env python3
import math

n = int(input())
d = 1 + 8 * n
sd = math.sqrt(d)
if round(sd) == sd:
    print((-1 + round(sd)) // 2)
else:
    print(-1)
