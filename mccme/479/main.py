#!/usr/bin/env python

n,m = map(int, raw_input().split(' ')[0:2])
g = [[0 for j in xrange(n)] for i in xrange(n)]


for i in xrange(m):
    a,b = map(int, raw_input().split(' ')[0:2])
    a -= 1
    b -= 1
    g[a][b] = 1
    g[b][a] = 1

for i in xrange(n):
    for j in xrange(n):
        if g[i][j] == 1:
            for k in xrange(n):
                if k != j and k != i and g[i][k] + g[j][k] == 1:
                    print "NO"
                    exit()

print "YES"
