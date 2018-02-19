#!/usr/bin/env python

alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."


def char_code(c):
    return alphabet.find(c)

def to_char(code):
    return alphabet[code]


while True:
    s = input()
    if s == "0":
        break
    n, s = s.split(' ')
    n = int(n)
    r = ""
    for c in s:
        r += to_char((char_code(c) + n) % len(alphabet))
    print(r[::-1])