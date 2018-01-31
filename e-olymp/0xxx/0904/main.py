#!/usr/bin/env python3

n = int(input())
a = map(int, input().split(' ')[:n])

def transform(v):
    return v+2 if v >= 0 else v

print (' '.join(map(str, map(transform, a))))