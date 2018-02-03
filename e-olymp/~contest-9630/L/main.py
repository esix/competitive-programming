#!/usr/bin/env python3

import operator
import functools

v = abs(int(input()))
digits = list(map(int, str(v)))
print(digits[-1])

