#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


T = int(inp.readline())

def x2_sum_generator(n, m, a):
    for i in range(n-1):
        for j in range(m-1):
            yield a[i][j] + a[i][j+1] + a[i+1][j] + a[i+1][j+1]


for t in range(T):
    n, m = map(int,inp.readline().split(' ')[0:2])
    a = [list(map(int,inp.readline().split(' ')[0:m])) for i in range(n)]
    answer = "YES"
    for val in x2_sum_generator(n, m, a):
        if val % 4 == 0:
            answer = "NO"
            break

    print(answer)
    out.write(answer + "\n")
