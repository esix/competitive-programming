#!/usr/bin/env python

n = int(raw_input())

g =  [map(int, raw_input().split(' ')[0:n]) for i in xrange(n)]

for u in xrange(n):
    for v in xrange(n):
        for w in xrange(n):
            if g[u][v] == 1 and g[v][w] == 1:
                if g[u][w] == 0:
                    print "NO"
                    exit()

print "YES"