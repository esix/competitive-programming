#!/usr/bin/env python3

s = str(int(input()))
digits = list(filter(lambda d: d != '3' and d != '9', s))
n = ''.join(digits)
print(n)

