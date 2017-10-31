#!/usr/bin/env python

n,m = map(int, raw_input().split(' ')[0:2])
pwrs = [0 for i in xrange(n)]


for i in xrange(m):
    a,b = map(int, raw_input().split(' ')[0:2])
    pwrs[a-1] += 1
    pwrs[b-1] += 1

val = pwrs[0]
for i in xrange(n):
    if pwrs[i] != val:
        print "NO"
        exit()

print "YES"
