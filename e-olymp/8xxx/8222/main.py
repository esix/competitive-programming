#!/usr/bin/env python3

s = input()
i, j = map(int, input().split(' '))
ss = s[i-1:j]
print(len(ss))
print(ss)