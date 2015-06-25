#!/usr/bin/env python

n = int(raw_input())

ins = [1 for i in xrange(n)]
outs = [1 for i in xrange(n)]

for i in xrange(n):
    row = map(int, raw_input().split(' ')[0:n])
    for j in xrange(n):
        if row[j]:
            ins[j] = 0
            outs[i] = 0

print sum(ins)
for i in xrange(n):
    if ins[i] == 1:
        print i+1
print sum(outs)
for i in xrange(n):
    if outs[i] == 1:
        print i+1
