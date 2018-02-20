#!/usr/bin/env python3

def count_n2(n):
    r = 0
    x = 2
    while x <= n:
        r += n // x
        x *= 2
    return r

def count_n5(n):
    r = 0
    x = 5
    while x <= n:
        r += n // x
        x *= 5
    return r


n = int(input())
n2 = count_n2(n)
n5 = count_n5(n)

print (min(n2, n5))