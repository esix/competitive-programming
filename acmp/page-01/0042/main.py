#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

cache = {0:1}

def f(n):
    if n in cache:
        return cache[n]
    v = max([f(i) * (n-i) for i in range(n)])
    cache[n] = v
    return v  


n = int(inp.readline())
answer = str(f(n))


print(answer)
out.write(answer)
