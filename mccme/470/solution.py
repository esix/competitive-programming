#!/usr/bin/env python

n = int(raw_input())

result = [0 for i in xrange(n)]

for i in xrange(n):
    row = map(int, raw_input().split(' ')[0:n])
    for j in xrange(i, n):
        if row[j]:
            result[i] += 1
            result[j] += 1

print '\n'.join(map(str,result))
