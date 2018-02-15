#!/usr/bin/env python3

n, a, b = map(int, input().split(' '))
s = str(n).replace(str(a), str(b), 100)
print(s)