#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


s = inp.readline().strip()
answer = 0
current = 0
for c in s:
    if c == '0':
        current += 1
        if current > answer:
            answer = current
    else:
        current = 0

answer = str(answer)
print(answer)
out.write(answer)
