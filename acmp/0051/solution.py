#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, k = inp.readline().strip().split(' ')[0:2]
n = int(n)
k = len(k)

result = 1
while n > 0:
    result *= n
    n -= k

answer = str(result)
print(answer)
out.write(answer)
