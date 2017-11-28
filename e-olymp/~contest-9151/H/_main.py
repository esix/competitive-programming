#!/usr/bin/env python3

#
#  fail on test 7: TLE
#


def get_hilbert_position(x, y, s):
    if s < 0.01:
        return [0]

    h = s / 2;
    q = 0
    if x < h:
        q = 0 if y < h else 1
    else:
        q = 3 if y < h else 2

    xx = 0
    yy = 0

    if q == 0:
        xx = y
        yy = x
    elif q == 1:
          xx = x
          yy = y - h
    elif q == 2:
        xx = x - h
        yy = y - h
    elif q == 3:
        xx = h - y
        yy = s - x

    inner =  get_hilbert_position(xx, yy, h);

    return [q] + inner

n, s = map(int, input().split(' '))

all = []

for i in range(n):
    x, y, name = input().split(' ')
    x = int(x)
    y = int(y)
    pos = get_hilbert_position(x, y, s)
    all.append((pos, name))

all.sort()
print ('\n'.join(map(lambda a: a[1], all)))