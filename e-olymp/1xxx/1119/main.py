#!/usr/bin/env python3

c, n = input().split(' ')
n = int(n)

l = 2 * n - 1
print ((2 * l - (n-1)) * n // 2)


def build_line(m):
    chars_num = 2 * m + 1
    spaces_num = n - m - 1
    chars = ''.join([c for i in range(chars_num)])
    spaces = ''.join([' ' for i in range(spaces_num)])
    return spaces + chars

for i in range(n):
    print(build_line(i))