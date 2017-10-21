#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, m = map(int, inp.readline().split(' ')[0:2])

mtx = []

for i in range(n):
    mtx.append(list(map(int, inp.readline().split(' ')[0:m])))

max_ = None
for i in range(n):
    min_ = None
    for j in range(m):
        if min_ is None or mtx[i][j] < min_:
            min_ = mtx[i][j]
    if max_ is None or min_ > max_:
        max_ = min_

a1 = max_

min_ = None
for j in range(m):
    max_ = None
    for i in range(n):
        if max_ is None or mtx[i][j] > max_:
            max_ = mtx[i][j]
    if min_ is None or max_ < min_:
        min_ = max_

a2 = min_

answer = str(a1) + " " + str(a2)
print(answer)
out.write(answer)
