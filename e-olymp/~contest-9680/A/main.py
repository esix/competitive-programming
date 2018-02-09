#!/usr/bin/env python3

T = int(input())

for t in range(T):
    k = int(input())
    print ("GCVVGCCVG"[(3 * (k % 3)) : (3 * (k % 3) + 3)])
