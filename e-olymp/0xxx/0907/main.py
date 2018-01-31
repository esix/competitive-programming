#!/usr/bin/env python3

n = int(input())
a = list(map(float, input().split(' ')[:n]))

for i in range(len(a)):
    if a[i] <= 2.5:
        print(i + 1, a[i])
        exit(0)
    
print('Not Found')