#!/usr/bin/env python3

import sys
import re

p_st = re.compile(r'(?:(   |\[[A-Z]\])\s)')
p_mv = re.compile(r'move (\d+) from (\d+) to (\d+)')

stacks1 = None
stacks2 = None

for line in sys.stdin:
    m = p_st.findall(line)
    if len(m):
        if not stacks1:
            stacks1 = [[] for _ in m]
            stacks2 = [[] for _ in m]
        for i in range(len(m)):
            if m[i][1] != ' ':
                stacks1[i].insert(0, m[i][1])
                stacks2[i].insert(0, m[i][1])

    m = p_mv.match(line)
    if m:
        n = int(m[1])
        f = stacks1[int(m[2]) - 1]
        t = stacks1[int(m[3]) - 1]
        t.extend(reversed(f[len(f) - n:]))
        del f[len(f) - n:]
        
        f = stacks2[int(m[2]) - 1]
        t = stacks2[int(m[3]) - 1]
        t.extend(f[len(f) - n:])
        del f[len(f) - n:]
        

print(''.join([stack[-1] for stack in stacks1]))
print(''.join([stack[-1] for stack in stacks2]))
