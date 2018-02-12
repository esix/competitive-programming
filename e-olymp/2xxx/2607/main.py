#!/usr/bin/env python3

n = int(input())

digits = list(map(int, str(n)))
es = sum(digits[::2])
os = sum(digits[1::2])

print (es * os)