#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


cs = [tuple(map(int,inp.readline().split(' ')[0:2])) for i in range(4)]
a = sum(map(lambda c: c[0], cs))
b = sum(map(lambda c: c[1], cs))
if a == b:
    answer = "DRAW"
elif a > b:
    answer = "1"
else:
    answer = "2"

print(answer)
out.write(answer)
