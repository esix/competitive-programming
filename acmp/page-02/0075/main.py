#!/usr/bin/env python3
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
answer = str(45**n)
print(answer)
out.write(answer)
