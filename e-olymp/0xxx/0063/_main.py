#!/usr/bin/env python3

x, y = map(int, input().split(' '))


n = x + y - 2
m = y - 1


n_fact = 1
for i in range(1, n+1):
    n_fact *= i

m_fact = 1
for i in range(1, m+1):
    m_fact *= i

nm_fact = 1
for i in range(1, n-m+1):
    nm_fact *= i

result = n_fact // (m_fact * nm_fact)
print(result)