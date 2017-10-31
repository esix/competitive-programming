#!/usr/bin/env python3

from fractions import gcd
from math import ceil

a, b, c = map(int, input().split(' '))

if c == 0:
    print ("YES" if a == 0 or b == 0 else "NO")
    exit(0)

if a == 0 and b == 0:   # c != 0
    print ("NO")
    exit(0)

if a == 0:             # b != 0
    print ("YES" if c % b == 0 else "NO")
    exit(0)

if b == 0:             # a != 0
    print ("YES" if c % a == 0 else "NO")
    exit(0)

if c % b == 0:
    print ("YES")
    exit(0)

if c % a == 0:
    print ("YES")
    exit(0)


gcd_ab = gcd(a, b)

if c % gcd_ab != 0:
    print ("NO")
    exit(0)

q, r = a // b, a % b
M, m, Ma, Mb, ma, mb = b, r, 0, 1, 1, -q

while m > 0:
    q, r = M // m, M % m
    M, Ma, Mb, m, ma, mb = m, ma, mb, r, Ma - q*ma, Mb - q*mb

Ma *= c // gcd_ab
Mb *= c // gcd_ab

# a * Ma + b * Mb = c

if Ma >= 0 and Mb >= 0:
    print ("YES")
    exit(0)

# Ma or Mb < 0

if Ma < 0:
    Ma, Mb = Mb, Ma
    a, b = b, a

# swap to have: Mb < 0
print (a, "*", Ma, "+", b, "*", Mb, "=", c)

Da = b // gcd_ab
Db = a // gcd_ab

# a * (Ma - k * Da) + b * (Mb + k * Db) = c

k = ceil(-Mb / Db)

Ma -= k * Da
Mb += k * Db
print (a, "*", Ma, "+", b, "*", Mb, "=", c)


print ("YES" if Ma >= 0 else "NO")

