#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


def d(n, m):
    return  19*m + (n + 239)*(n + 366) // 2


n = int(inp.readline())
answers = []

for i in range(n):
    n, m = map(int, inp.readline().split(' ')[0:2])
    answers.append(d(n,m))
    

answer = str('\n'.join(map(str,answers)))


print(answer)
out.write(answer)
