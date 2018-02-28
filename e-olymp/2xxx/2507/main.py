#!/usr/bin/env python3

w, h = map(int, input().split())

a = [input() for i in range(h)]

r = 0
for y in range(h):
    for x in range(w):
        v = a[y][x]
        if y > 0 and a[y-1][x] != v: r += 1
        if y < h-1 and a[y+1][x] != v: r += 1
        if x > 0 and a[y][x-1] != v: r += 1
        if x < w-1 and a[y][x+1] != v: r += 1

print(r // 2)