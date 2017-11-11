#!/usr/bin/env python3

s = str(int(input()))

digits = (len(s) >> 1) + (len(s) & 1)

result = 0
for i in range(digits):
    if s[i] == s[-i-1]:
        result += 1

print (result)
