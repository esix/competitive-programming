#!/usr/bin/env python3

n, s = map(int, input().split(' '))


r = [0 for i in range(n)]


def iter(i, summ):
    if i == n:
        if summ == s:
            print(''.join(map(str, r)))
        return
    start = 0
    if i == 0:
        start = 1
    for v in range(start, 10):
        new_summ = summ + v
        if new_summ <= s:
            r[i] = v
            iter(i+1, new_summ)


iter(0, 0)
