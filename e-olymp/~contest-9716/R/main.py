#!/usr/bin/env python3

n, c = map(int, input().split(' '))

s = 0
d = 0
ss = 0


for i in range(n):
    a, t = input().split(' ')
    a = int(a)

    s += a

    if t == "bedroom":
        d += a
        ss += a
    elif t == "bathroom":
        ss += a
    elif t == "kitchen":
        ss += a
    elif t == "balcony":
        ss += a / 2
    elif t == "other":
        ss += a

print (s)
print (d)
print ("%.6f" % (ss * c))