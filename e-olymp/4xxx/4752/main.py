#!/usr/bin/env python3

def f(n, m):
    if n == m:
        return n + 1
    if n == 0:
        return m + 1
    if m == 0:
        return n + 1

    if n < m:
        return f(m, n)

    # n > m
    return f(n % m, m)


n, m = map(int, input().split(' '))
print (f(n-1, m-1))

