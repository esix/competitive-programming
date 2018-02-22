#!/usr/bin/env python3

n, m = map(int, input().split(' '))
a = list(map(int, input().split(' ')))

r = max(a + [(sum(a) + m - 1) // m])
print (r)
