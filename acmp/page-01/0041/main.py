#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
answer = ' '.join(map(str,sorted(map(int,inp.readline().split(' ')[0:n]))))

print(answer)
out.write(answer)
