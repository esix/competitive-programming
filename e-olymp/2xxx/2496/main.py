#!/usr/bin/env python3

s = input()
i = 0

def process():
    global i
    result = ""
    while i < len(s):
        c = s[i]
        i = i + 1
        if c == '(':
            result += process()[::-1]
        elif c == ')':
            return result
        else:
            result += c

    return result

print (process())