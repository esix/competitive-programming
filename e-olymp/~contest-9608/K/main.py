#!/usr/bin/env python3

ss = input().split(' ')
n = int(ss[0])
vs = list(map(int, ss[1:n+1]))


m = min(vs)
M = max(vs)

vs = [m if v == M else v for v in vs]
print (' '.join(map(str, vs)))