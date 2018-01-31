#!/usr/bin/env python3

n = int(input())
a = map(float, input().split(' ')[:n])
a = list(filter(lambda v: v < 0, a))

print (len(a), "%.2f" % sum(a))