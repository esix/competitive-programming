#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a = inp.readline().strip()
b = inp.readline().strip()

na = len(a)
nb = len(b)

bs = [(b+b)[i:i+len(b)] for i in range(len(b))]

result = 0
if len(a) < len(b):
    result = 0
else:
    for i in range(len(a)):
        asub = a[i:i+len(b)]
        if asub in bs:
            result += 1

answer = str(result)
print(answer)
out.write(answer)
