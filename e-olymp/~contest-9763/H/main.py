#!/usr/bin/env python3

a, b = input().split(' ')
c = int(''.join(reversed(sorted(a + b))))
print(c)
