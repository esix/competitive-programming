#!/usr/bin/env python3

n = int(input())


primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43]


if n == 1:
    print(1)
    exit(0)

# hash: [prime] -> [power of that prime in n!]
ms = {}

for d in range(2, n+1):
    for p in primes:
        while d % p == 0:
            d //= p
            ms[p] = ms[p] + 1 if p in ms else 1

r = 1
for i in ms.values():
    r *= i + 1

print(r)