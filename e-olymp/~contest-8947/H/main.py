from math import pi

n = int(input())

for i in range(n):
    inp = list(map(float, input().split(' ')))

    if len(inp) == 1:
        t = inp[0]
        r1, r2 = t/4, t/4
        print (pi * 2 * r1 * r2)
    else:
        r1, r2 = inp
        print (pi * 2 * r1 * r2)
