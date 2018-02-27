#!/usr/bin/env python3

w, h = map(int, input().split(' '))

image1 = [input() for i in range(h)]
image2 = [input() for i in range(h)]

mask = input()

def get_char(c1, c2):
    c1 = ord(c1) - ord('0')
    c2 = ord(c2) - ord('0')
    return mask[2 * c1 + c2]

for y in range(h):
    line = ''.join([get_char(image1[y][x], image2[y][x]) for x in range(w)])
    print(line)
