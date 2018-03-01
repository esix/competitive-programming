#!/usr/bin/env python3

a = [[0 for j in range(202)] for i in range(202)]

for i in range(3):
    x1, y1, x2, y2 = map(int, input().split(' '))
    x1 += 100
    x2 += 100
    y1 += 100
    y2 += 100

    y1, y2 = min(y1, y2), max(y1, y2)
    x1, x2 = min(x1, x2), max(x1, x2)

    for y in range(y1, y2):
        for x in range(x1, x2):
            a[y][x] = 1

print (sum(map(sum, a)))
