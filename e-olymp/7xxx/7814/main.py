#!/usr/bin/env python3

v = str(int(input()))

d0 = int(v[0])
d1 = int(v[1])
d2 = int(v[2])

d01 = 10 * d0 + d1
d02 = 10 * d0 + d2
d12 = 10 * d1 + d2

if len(str(d01)) < 2: d01 = 99999
if len(str(d02)) < 2: d02 = 99999
if len(str(d12)) < 2: d12 = 99999

print(min([d01, d02, d12]))
