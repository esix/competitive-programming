#!/usr/bin/env python3

import operator

n = int(input())
a = list(map(int, input().split(' ')[:n]))
b = list(map(int, input().split(' ')[:n]))

a.sort()
b = reversed(sorted(b))

print(sum(map(operator.mul, a, b)))
