#!/usr/bin/env python3

s = input()
a = int(''.join(sorted(s)))
b = int(''.join(reversed(sorted(s))))
print(a + b)
