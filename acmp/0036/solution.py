#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())

primes = [1] * (2*n)
primes[0] = 0
primes[1] = 0

for i in range(2, int(math.sqrt(2*n+1))+1):
    if primes[i]:
        for f in range(i*2, 2*n, i):
            primes[f] = 0


answer = str((sum(primes[n+1:2*n])))

print(answer)
out.write(answer)
