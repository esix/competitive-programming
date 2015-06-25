#!/usr/bin/env python

n,m = map(int, raw_input().split(' ')[0:2])
result_in = [0 for i in xrange(n)]
result_out = [0 for i in xrange(n)]

for i in xrange(m):
    a,b = map(int, raw_input().split(' ')[0:2])
    result_out[a-1] += 1
    result_in[b-1] += 1

for i in xrange(n):
    print result_in[i]
    print result_out[i]
