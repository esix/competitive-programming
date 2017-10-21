#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


def primes(limit):
    limitn = limit+1
    primes = dict()
    for i in range(2, limitn): primes[i] = True

    for i in primes:
        factors = range(i,limitn, i)
        for f in factors[1:]:
            primes[f] = False
    return [i for i in primes if primes[i]==True]

ps = ''.join(map(str, primes(21000)))
# len(ps) = 10374

m = int(inp.readline())
answer = ''.join([ps[idx-1] for idx in map(int,inp.readline().split(' ')[0:m])])


print(answer)
out.write(answer)
