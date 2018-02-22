#!/usr/bin/env python3

n = int(input())

l = ['.' for i in range(2*n + 1)]
l[n] = '*'
l = ''.join(l)

for i in range(n):
    print(l)

print(''.join(['*' for i in range(2*n+1)]))

for i in range(n):
    print(l)
