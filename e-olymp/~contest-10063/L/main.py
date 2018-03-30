#!/usr/bin/env python3

s = input()
a, b = map(int, input().split(' '))

print (b - a + 2)
for i in range(a, b):
    print(s[a-1:i])