#!/usr/bin/python3 shebang

import sys

lines = [line.strip() for line in sys.stdin]

def get_priority(c):
    if 'a' <= c <= 'z':
        return ord(c) - ord('a') + 1
    else:
        return ord(c) - ord('A') + 27

result1 = 0

for r in lines:
    r1 = r[:(len(r) // 2)]
    r2 = r[len(r) // 2:]
    shared = set([c for c in r1 if c in r2])
    for c in shared:
        result1 += get_priority(c)

print(result1)

result2 = 0

for i in range(len(lines) // 3):
    l1, l2, l3 = lines[i * 3 : i * 3 + 3]
    for c in l1:
        if c in l2 and c in l3:
            result2 += get_priority(c)
            break

print(result2)