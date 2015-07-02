#!/usr/bin/env python


n, w = map(int, raw_input().split(' ')[0:2])
a = map(int, raw_input().split(' ')[0:2*n])
a.sort()

x = min(2*a[0], a[n]) / float(2)
x = min(x, w / float(3*n))

print x * 3 * n
