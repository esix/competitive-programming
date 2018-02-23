#!/usr/bin/env python3

n = int(input())
a = map(int, input().split(' ')[:n])
print(' '.join(map(str, sorted(a))))
