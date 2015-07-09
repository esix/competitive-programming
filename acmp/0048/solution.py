#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = inp.readline().strip()

answer = '1'

while n[-1] == '0':
    n = n[:-1]
    answer += '0'

print(answer)
out.write(answer)
