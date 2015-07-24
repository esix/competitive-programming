#!/usr/bin/env python3
from collections import defaultdict
I = open('input.txt', 'r')

s = defaultdict(int)
e = defaultdict(int)
for i in range(int(I.readline())):
    l = I.readline()
    s[int(l[0:2])*60 + int(l[3:5])]+=1
    e[int(l[6:8])*60 + int(l[9:11])]+=1
r = 0
m = 0
for i in sorted(set(s.keys()).union(e.keys())):
    r += s[i]
    m = max(r, m)
    r -= e[i]
open('output.txt', 'w').write(str(m))
