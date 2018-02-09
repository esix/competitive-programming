#!/usr/bin/env python3

_memo = {}

def get_cycle_len(n):
    global _memo
    if n == 1:
        return 1
    if n not in _memo:
        if n % 2 == 0:
            _memo[n] = get_cycle_len(n // 2) + 1
        else:
            _memo[n] = get_cycle_len(3 * n + 1) + 1
    return _memo[n]

while True:
    try:
        i, j = map(int, input().split(' '))
    except (EOFError, ValueError):
        break

    mi = min(i,j)
    mj = max(i,j)
    res_c = get_cycle_len(mj)
    for k in range(mi, mj):
        c = get_cycle_len(k)
        if c > res_c:
            res_c = c
    print(i, j, res_c)
