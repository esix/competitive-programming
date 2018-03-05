#!/usr/bin/env python3

def round(v):
    d = v % 10
    return v - d + 10 if d >= 5 else v - d

n, d = map(int, input().split(' '))
p = list(map(int, input().split(' ')[:n]))

a = [0 for i in range(d+1)]

for j in range(n):
    b = [0 for i in range(d+1)]
    b[0] += a[0] + p[j]
    for i in range(1, d+1):
        b[i] = min(round(a[i-1]) + p[j], a[i] + p[j])
    a = b
    #print(a)


a = list(map(round, a))
# print(a)
print(min(a))