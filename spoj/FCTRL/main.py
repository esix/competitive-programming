#!/usr/bin/env python

num = int(raw_input())

for i in xrange(num):
    n = int(raw_input())
    result = []
    while n >= 5:
        n /= 5
        if n > 0: result.append(n)
    print sum(result)
