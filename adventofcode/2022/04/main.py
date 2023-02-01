#!/usr/bin/env python3

import sys
import re

p = re.compile("^(\d+)-(\d+),(\d+)-(\d+)$")

def parse_line(line):
    m = p.match(line.strip())
    return ((int(m[1]), int(m[2])), (int(m[3]), int(m[4])))

def includes(a, b):
    return a[0] <= b[0] and b[1] <= a[1]

def overlaps(a, b):
    return a[0] <= b[0] <= a[1] or a[0] <= b[1] <= a[1]

pairs = [parse_line(line) for line in sys.stdin]

result1 = len([pair for pair in pairs if includes(pair[0], pair[1]) or includes(pair[1], pair[0])])
print (result1)

result2 = len([pair for pair in pairs if overlaps(pair[0], pair[1]) or overlaps(pair[1], pair[0])])
print (result2)
