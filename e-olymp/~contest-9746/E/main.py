#!/usr/bin/env python3

n, m, k = map(int, input().split(' '))

r = ((n // k) + bool(n % k)) * ((m // k) + bool(m % k))
print(r)