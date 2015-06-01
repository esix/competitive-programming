#!/usr/bin/env python

n,m = map(int, raw_input().split(' ')[0:2])
g = [[0 for j in xrange(n)] for i in xrange(n)]


for i in xrange(m):
    a,b = map(int, raw_input().split(' ')[0:2])
    g[a-1][b-1] = 1
    g[b-1][a-1] = 1


for i in xrange(n):
    for j in xrange(i+1,n):
        if g[i][j] != 1:
            print "NO"
            exit()

print "YES"
