#!/usr/bin/env python3

n = int(input())

def char(i, j):
    if i < j:
        return '2'
    if i == j:
        return '0'
    return '1'

for i in range(n):
    print (''.join(reversed([char(i,j) for j in range(n)])))