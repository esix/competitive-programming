#!/usr/bin/env python3

n, i, j = map(int, input().split(' '))

x = 1
y = 1

begin = 1
end = n 

def next():
    global x, y, begin, end
    if x == begin and y == begin + 1:
        begin += 1
        end -= 1
        x += 1
    elif x == begin and y == begin:
        x += 1
    elif x == end and y == begin:
        y += 1
    elif x == end and y == end:
        x -= 1
    elif x == begin and y == end:
        y -= 1
    elif y == begin:
        x += 1
    elif x == end:
        y += 1
    elif y == end:
        x -= 1
    elif x == begin:
        y -= 1


cnt = 1
while x != j or y != i:
    next()
    cnt += 1

print(cnt)