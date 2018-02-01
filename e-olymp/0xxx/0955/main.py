#!/usr/bin/env python3

v = int(input())
digits = list(map(int, str(v)))
s = sum(digits)
print(s **2)
