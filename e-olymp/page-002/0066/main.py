#!/usr/bin/env python3

import re

n = int(input())

times = []

for i in range(n):
    s = input()
    matches = re.match(r"(\d+):(\d+) (\d+):(\d+)", s)
    hh = int(matches.group(1))
    mm = int(matches.group(2))
    start = hh * 60 + mm
    hh = int(matches.group(3))
    mm = int(matches.group(4))
    end = hh * 60 + mm
    times.append((start, end))

times.sort(key=lambda t: t[1])


def periods_intersects(p1, p2):
    if p1[1] <= p2[0] or p2[1] <= p1[0]:
        return False
    return True


def has_any_intersection(p, ps):
    for pp in ps:
        if periods_intersects(pp, p):
            return  True
    return False

l = []

for period in times:
    if has_any_intersection(period, l):
        pass
    else:
        l.append(period)

print (len(l))
