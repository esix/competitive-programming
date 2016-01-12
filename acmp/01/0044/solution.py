#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


s = inp.readline().strip()
answer = 0

i = 0
try:
    while(True): 
        i = s.index('>>-->', i) + 1
        answer += 1
except ValueError as e:
    pass

i = 0
try:
    while(True): 
        i = s.index('<--<<', i) + 1
        answer += 1
except ValueError as e:
    pass

answer = str(answer)
print(answer)
out.write(answer)
