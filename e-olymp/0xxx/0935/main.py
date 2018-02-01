#!/usr/bin/env python3

a = int(input())
a = abs(a)
digits = list(map(int, str(a)))
print ('\n'.join(map(str, digits)))
