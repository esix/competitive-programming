#!/usr/bin/env python

n = int(raw_input())

result = [[] for i in xrange(n)]

try:
    for i in xrange(n):
        ends = map(int, filter(lambda s: len(s), raw_input().split(' ')))
        for e in ends:
            result[e-1].append(i+1)
except Exception:
    pass

print n
for line in result:
    print ' '.join(map(str, line))
