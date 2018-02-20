#!/usr/bin/env python3

qs = {}

q = int(input())

for i in range(q):
    qs[i+1] = input()

r = int(input())

for i in range(r):
    k = int(input())
    rule = qs[k] if k in qs else "No such rule"
    print("Rule %d: %s" % (k, rule))
