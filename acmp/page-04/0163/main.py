#!/usr/bin/env python3
inp = open('input.txt', 'r')
out = open('output.txt', 'w')


s = inp.readline()

a = s[0]
sign = s[1]
b = s[2]
c = s[4]

if a != 'x': a = int(a)
if b != 'x': b = int(b)
if c != 'x': c = int(c)
sign = -1 if sign == '-' else +1

answer = 0
if a == 'x':
    answer = c - sign * b
elif b == 'x':
    answer = (c - a) * sign
else:
    answer = a + sign * b

print(answer)
out.write(str(answer))
