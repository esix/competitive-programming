#!/usr/bin/env python3


def get_char(s, i):
    if i < 0: return 'X'
    if i >= len(s): return 'X'
    return s[i]


def solve(s):
    result = 0
    for i in range(len(s)):
        c = get_char(s, i)
        cp = get_char(s, i-1)
        cn = get_char(s, i+1)
        cnn = get_char(s, i+2)
        if c == '-' and cp != 'S' and cn != 'S' and cn != 'B' and cnn != 'B':
            result += 1
    return result


n = int(input())
for i in range(n):
    print(solve(input()))