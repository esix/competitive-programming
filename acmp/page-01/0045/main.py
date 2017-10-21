#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = int(inp.readline())

ds = [0 for i in range(10)]

if n == 0:
    answer = '10'
elif n == 1:
    answer = '1'
else:
    for i in range(9, 1, -1):
        while n % i == 0:
            n //= i
            ds[i] += 1

    if sum(ds) == 0 or n != 1:
        answer = "-1"
    else:
        answer = ""
        for i in range(2,10):
            answer += str(i) * ds[i]

print(answer)
out.write(answer)
