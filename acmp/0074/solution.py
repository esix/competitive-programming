#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, m = map(int, inp.readline().split(' ')[0:2])
m -= 1
result = 1

while n > 1:
    if m % 2 == 1:
        result += m // 2
        break
    m //= 2
    result += n // 2
    n = n // 2 + n % 2

answer = str(result)
print(answer)
out.write(answer)
