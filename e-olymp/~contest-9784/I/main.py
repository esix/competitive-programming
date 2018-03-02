#!/usr/bin/env python3

x = 0
y = 0

def move(d):
    global x, y
    if d == 1 or d == 2 or d == 3:
        y -= 1
    if d == 7 or d == 6 or d == 5:
        y += 1
    if d == 1 or d == 8 or d == 7:
        x -= 1
    if d == 3 or d == 4 or d == 5:
        x += 1


visited = set([(0,0)])

n = int(input())

for i in range(n):
    d = int(input())
    move(d)
    if (x, y) in visited:
        print(i+1)
        exit(0)
    visited.add((x,y))

print("Ok")
print (abs(x) + abs(y))