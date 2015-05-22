#!/usr/bin/env python

k, n, w = map(int, raw_input().split(' '))


cost = (2 * k + k * (w-1)) * w/ 2
r = cost - n
print r if r >= 0 else 0
