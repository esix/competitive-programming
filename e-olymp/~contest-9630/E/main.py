#!/usr/bin/env python3

import operator
import functools

a = int(input())
a = abs(a)
digits = list(map(int, str(a)))
p = functools.reduce(operator.mul, digits, 1)
s = sum(digits)
print (p - s)
