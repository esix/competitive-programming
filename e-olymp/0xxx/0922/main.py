#!/usr/bin/env python3

n = int(input())
a = list(map(int, input().split(' ')[:n]))
a = a[-1:] + a[0:-1]

print (' '.join(map(str, a)))