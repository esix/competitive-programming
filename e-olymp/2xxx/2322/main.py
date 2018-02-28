#!/usr/bin/env python3

x = int(input())
n = int(input())
a = [list(map(int, input().split()[:n])) for j in range(n)]

for j in range(n):
    r = False
    for i in range(n):
        if a[i][j] == x:
            r = True
    print ("YES" if r else "NO")
