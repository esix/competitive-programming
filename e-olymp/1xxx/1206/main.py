#!/usr/bin/env python3

memo = {}

def f91(n):
    if n <= 100:
        if n not in memo:
            memo[n] = f91(f91(n+11))
        return memo[n]
    return n - 10


n = int(input())
print(f91(n))