#!/usr/bin/env python3
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = str(int(inp.readline().strip()))
line = ''.join(map(lambda x: str(x), range(1, 100000)))

answer = line.index(s) + 1

print(answer)
out.write(str(answer))
