#!/usr/bin/env python3

n = int(input())
a = list(map(int, input().split(' ')[:n]))


print (' '.join(map(str, reversed(a))))