#!/usr/bin/env python3

def transform(c):
    if c.islower():
        return c.upper()
    if c.isupper():
        return c.lower()
    return c

s = input()
t = ''.join(map(transform, s))
print(t)
