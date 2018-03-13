#!/usr/bin/env python3

n = int(input())
a = list(map(int, input().split(' ')[:n]))
m = int(input())
b = list(map(int, input().split(' ')[:m]))
r = sorted(set(a+b))
print(' '.join(map(str, r)))