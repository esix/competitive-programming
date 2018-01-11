#!/usr/bin/env pyth0n3

def f(m, n):
    if m == 0:
        return 1
    if m == n:
        return 1
    return f(m-1, n-1) + f(m, n-1)

n, m = map(int, input().split(' '))

print (f(m,n))