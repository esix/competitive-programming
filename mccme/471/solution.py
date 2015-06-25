#!/usr/bin/env python

n,m = map(int, raw_input().split(' ')[0:2])

result = [0 for i in xrange(n)]

for i in xrange(m):
    a,b = map(int, raw_input().split(' ')[0:2])
    result[a-1] += 1
    result[b-1] += 1

print '\n'.join(map(str, result))