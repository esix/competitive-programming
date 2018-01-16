#!/usr/bin/env python3

n = int(input())

for i in range(n):
    l = input()
    if l[i*2] == '1':
        print("YES")
        exit(0)

print ("NO")
