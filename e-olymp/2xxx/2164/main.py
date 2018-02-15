#!/usr/bin/env python3

s = input()
n = int(input())

def encode(c):
    return chr(((ord(c) - ord('A')) - n) % 26 + ord('A'))

print (''.join(map(encode, s)))