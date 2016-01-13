#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


k = int(inp.readline())

def primes(limit):
    limitn = limit+1
    primes = dict()
    for i in range(2, limitn): primes[i] = True

    for i in primes:
        factors = range(i,limitn, i)
        for f in factors[1:]:
            primes[f] = False
    return [i for i in primes if primes[i]==True]

ps = primes(50000)

answer = str(ps[ps[k-1]-1])

print(answer)
out.write(answer)
