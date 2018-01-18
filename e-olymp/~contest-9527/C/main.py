#!/usr/bin/env python3

a, b, c = map(int, input().split(' '))

cubes = a * b * c
total_s = cubes * 6
original_s = 2 * (a * b + a * c + b * c)
s = total_s - original_s
print (cubes, s)