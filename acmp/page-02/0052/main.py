#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = inp.readline().strip()
while len(s) < 6:
    s = '0' + s

answer = "YES" if sum(map(int, s[:-3])) == sum(map(int, s[-3:])) else "NO"
print(answer)
out.write(answer)
