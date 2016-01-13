#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

s = inp.readline().strip()
n = int(inp.readline())
ms = [inp.readline().strip() for i in range(n)]

mins = []
min_dist = None

for i in range(len(ms)):
    m = ms[i]
    dist = sum([int(c != d) for c, d in zip(s, m)])
    if min_dist is None or min_dist > dist:
        mins = [i+1]
        min_dist = dist
    elif min_dist == dist:
        mins.append(i+1)

answer = str(len(mins)) + '\n' + ' '.join(map(str,mins))

print(answer)
out.write(answer)
