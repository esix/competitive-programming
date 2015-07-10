#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n, m = map(int, inp.readline().split(' ')[0:2])

blue = 0
green = 0
red = 0
black = 0

for i in range(1, n+1):
    for j in range(1, m+1):
        v = i * j
        if v % 5 == 0:
            blue += 1
        elif v % 3 == 0:
            green += 1
        elif v % 2 == 0:
            red += 1
        else:
            black += 1



answer = "RED : " + str(red) + "\nGREEN : " + str(green) + "\nBLUE : " + str(blue) + "\nBLACK : " + str(black)
print(answer)
out.write(answer)
