#!/usr/bin/env python

ad = dict()

na = int(raw_input())
for i in xrange(0, na):
    a = int(raw_input())
    ad[10000-a] = True


nb = int(raw_input())
for i in xrange(0, nb):
    b = int(raw_input())
    if ad.has_key(b):
        print "YES"
        exit()

print "NO"