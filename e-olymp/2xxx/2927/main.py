#!/usr/bin/env python3

def read_set():
    l = list(input().split(' '))
    n = int(l[0])
    return set(map(int, l[1:n+1]))

n = int(input())
s = read_set()

for i in range(1, n):
    s = s | read_set()

print(len(s))