#!/usr/bin/env python3

n = int(input())
a = list(map(int, input().split(' ')[:n]))
m = int(input())
b = set(map(int, input().split(' ')[:m]))
r = list(map(str, filter(lambda x: x not in b, a)))
print(len(r))
print(' '.join(r))