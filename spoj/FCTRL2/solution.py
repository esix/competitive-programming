#/usr/bin/env python

t = int(raw_input())

memo = {0: 1, 1:1}

def fact(n):
    if n in memo:
        return memo[n]
    
    f = n * fact(n-1)
    memo[n] = f
    return f

for i in xrange(t):
    print fact(int(raw_input()))