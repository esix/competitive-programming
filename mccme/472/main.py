#!/usr/bin/env python

n = int(raw_input())

result_in = [0 for i in xrange(n)]
result_out = [0 for i in xrange(n)]

for i in xrange(n):
    row = map(int, raw_input().split(' ')[0:n])
    for j in xrange(n):
        if row[j]:
            result_in[j] += 1
            result_out[i] += 1

for i in xrange(n):
    print result_in[i]
    print result_out[i]
