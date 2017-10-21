#!/usr/bin/env python3
import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = inp.readline().strip()
for i in range(len(s)-2, -1, -1):
    if(s[i] < s[i+1]):
        c = s[i]
        rest = list(s[i+1:])
        char_gt = sorted(list(filter(lambda cc: cc > c, rest)))[0]
        rest.remove(char_gt)
        rest.append(c)
        answer = s[:i] + char_gt + ''.join(sorted(rest))
        break

#answer = str(s)

print(answer)
out.write(answer)
