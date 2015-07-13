#!/usr/bin/env python3

from operator import mul
from functools import reduce

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n, k = map(int,inp.readline().split(' ')[0:2])

digits = []

while n >= 1:
    digits.append(n % k)
    n //= k

answer = str(reduce(mul, digits) - sum(digits))

print(answer)
out.write(answer)
