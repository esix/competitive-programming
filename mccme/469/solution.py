#!/usr/bin/env python

n, m = map(int, raw_input().split(' ')[0:2])

edges = set()

for i in xrange(m):
    a, b = map(int, raw_input().split(' ')[0:2])
    if (a,b) in edges:
        print "YES"
        exit()
    edges.add((a,b))

print "NO"