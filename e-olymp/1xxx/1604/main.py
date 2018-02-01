#!/usr/bin/env python3

import operator
import functools

v = abs(int(input()))
digits = list(map(int, str(v)))
evens = list(filter(lambda d: d % 2 == 0, digits))
p = functools.reduce(operator.mul, evens, 1) if len(evens) > 0 else -1
print(p)

