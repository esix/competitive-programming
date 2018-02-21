#!/usr/bin/env python3

n, m, k = map(int, input().split(' ')[:3])

l = k // n
r = (m + l - 1) // l
left = (k % n) * (r - 1)
p = m - l * (r - 1)
left += k - (p * n)
print(r, left)
