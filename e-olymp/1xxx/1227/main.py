#!/usr/bin/env python3

import re

WORDS = set([])

try:
    with open('input.txt', 'r', encoding="Cp1252") as inputfile:
        for s in inputfile:
            words = list(map(str.lower, re.findall(r"[A-Za-z]+", s)))
            WORDS |= set(words)
except FileNotFoundError:
    pass

# print('\n'.join(sorted(WORDS)))
outputfile = open('output.txt', 'w')
outputfile.write('\n'.join(sorted(WORDS)))