#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


a, b = map(int,inp.readline().split(' ')[0:2])
answer = str(a+b)


print(answer)
out.write(answer)
