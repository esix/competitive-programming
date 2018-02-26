#!/usr/bin/env python3

s = sorted(input())
d1 = int(''.join(s))
s = list(reversed(s))
d2 = int(''.join(s))
dd = d2 - d1
print (dd*dd)