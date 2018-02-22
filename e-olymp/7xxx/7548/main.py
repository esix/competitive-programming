#!/usr/bin/env python3

t = 1

while True:
    l, p, v = map(int, input().split(' '))
    if l == 0 and p == 0 and v == 0:
        break

    r = (v // p) * l + min(v - (v // p) * p, l)
    print ("Case %d: %d" % (t, r))
    t += 1
