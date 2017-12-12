#!/usr/bin/env python3

T = int(input())


def is_ramp(s):
    for i in range(1, len(s)):
        if s[i-1] > s[i]:
            return False
    return True


__cached_summ = [[1 if i == 0 else 0 for j in range(10)] for i in range(81)]

for i in range(1, 81):
    for j in range(10):
        for k in range(j, 10):
            __cached_summ[i][j] += __cached_summ[i-1][k]


for t in range(T):
    s = list(map(int, input()))

    if not is_ramp(s):
        print("-1")
        continue

    s.reverse()
    n = len(s)

    d = [[0 for j in range(10)] for i in range(n)]

    for j in range(s[0]):
        d[0][j] = 1

    for i in range(1, n):
        for j in range(s[i]):
            d[i][j] = __cached_summ[i][j]

        for j in range(s[i], 10):
            d[i][s[i]] += d[i-1][j]

    print(sum(d[n - 1]))
