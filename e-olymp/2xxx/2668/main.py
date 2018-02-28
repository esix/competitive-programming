#!/usr/bin/env python3

n = int(input())

if n == 1:
    print('0')
    exit(0)

a = [['0' for j in range(n)] for i in range(n)]


def draw_part(m):
    global a
    for i in range(n-2*m): a[m][m+i] = '1'
    for i in range(n-2*m): a[m+i][n-m-1] = '1'
    for i in range(n-2*m): a[n-m-1][n-m-i-1] = '1'
    for i in range(n-2*m-2): a[n-m-i-1][m] = '1'

    if m + 2 < n:
        a[m+2][m+1] = '1'
        draw_part(m+2)


draw_part(0)


for i in range(n):
    print (''.join(a[i]))