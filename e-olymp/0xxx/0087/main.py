#!/usr/bin/env python


m = 0
M = 0
p = 0

s = input()
for c in s:
    if c == 'L':
        p -= 1
        m = min(m, p)
    elif c == 'R':
        p += 1
        M = max(M, p)
      
print(M - m + 1)
