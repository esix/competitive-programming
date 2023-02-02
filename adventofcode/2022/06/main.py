#!/usr/bin/env python3

line = input()

def solve(N):
    for i in range(N, len(line) + 1):
        s = line[i-N:i]
        if len(set(s)) == len(s):
            return i
    return -1


print(solve(4))
print(solve(14))
