#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

chars = ' abcdefghijklmnopqrstuvwxyz'

def decode(c, i):
    v = ord(c)-ord('0') if c in '0123456789' else 10+ord(c)-ord('A')
    v = (v +  27 - i) % 27
    return chars[v]

s = inp.readline().strip()
answer = ""
for i in range(len(s)):
    answer += decode(s[i], i + 1)

print(answer)
out.write(answer)
