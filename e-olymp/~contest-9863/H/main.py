#!/usr/bin/env python3

while True:
    try:
        n, m = map(int, input().split(' '))
        print (2*n + 2*m, n*m)
    except (EOFError, ValueError):
        break
