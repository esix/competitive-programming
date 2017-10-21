from math import *

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a, b = inp.readline().split(' ')[0:2]

x, y = 0, 0

for i in range(4):
    if a[i] == b[i]:
        x += 1
    else:
        if a[i] in b: y += 1


print(x,y)

out.write(str(x) + " " + str(y))
