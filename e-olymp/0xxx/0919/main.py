#!/usr/bin/env python3

n = int(input())
a = list(map(float, input().split(' ')[:n]))

a = [a[i] for i in range(len(a)) if (i + 1) % 3 == 0 and a[i] > 0]

print (len(a), "%.2f" % sum(a))