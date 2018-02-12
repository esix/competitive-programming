#!/usr/bin/env python3

def fac(n, k):
      if k >= n:
          return n
      r = 1
      while k < n:
          r *= n
          n -= k
          if r > 1000000000000000000:
              return 1000000000000000001
      return r * fac(n, k)

n, k = map(int, input().split(' '))
r = fac(n, k)

if r > 1000000000000000000:
    r = "overflow"

print(r)