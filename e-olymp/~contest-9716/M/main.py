#!/usr/bin/env python3

import re

s = '+' + input()
es = re.findall(r"[+*]\d+", s)

r = 0
for e in es:
    if e[0] == '+':
        r += int(e[1:])
    elif e[0] == '*':
        r *= int(e[1:])

print(r)
