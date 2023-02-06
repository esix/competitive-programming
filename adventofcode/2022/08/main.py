#!/usr/bin/env python3

import sys

lines = [list(map(int, line.strip())) for line in sys.stdin]
N = len(lines)
K = len(lines[0])

F = max
NEUTRAL = 0


class FenwickTree:
    def __init__(self, src):
        n = len(src)
        a = [0 for _ in range(n)]
        b = [0 for _ in range(n)]

        m = 1
        while m < n: m *= 2
        m -= 2

        for i in range(n):
            a[i] = src[i]                           # прямое дерево Фенвика
            b[i] = src[i+1] if i+1 < n else NEUTRAL # встречное дерево Фенвика

        for i in range(n):
            j = i|i+1
            if j < n:
                a[j] = F(a[i], a[j])

        for i in range(m-n+2, m):
            j = i|i+1;
            u = m-i
            v = m-j;
            if j < m:
                b[v] = F(b[v], b[u])

        self.n = n
        self.a = a
        self.b = b

    def ask(self, l, r):
        res = NEUTRAL
        while (r&r+1) >= l and r >= l:
            res = F(self.a[r], res)
            r = (r & r + 1) - 1
        while (l|l-1) <= r and l != 0 and l < self.n:
            res = F(self.b[l-1], res)
            l = (l|l-1)+1
        return res


horizontal_fenwicks = [FenwickTree(lines[i]) for i in range(N)]
vertical_fenwicks = [FenwickTree([line[j] for line in lines]) for j in range(K)]


def get_score(i, j):
    v = lines[i][j]
    u, d, l, r = 1, 1, 1, 1

    while j - l > 0 and lines[i][j - l] < v: l += 1
    while j + r < K - 1 and lines[i][j + r] < v: r += 1
    while i - u > 0 and lines[i - u][j] < v: u += 1
    while i + d < N - 1 and lines[i + d][j] < v: d += 1

    return u * r * d * l

visibles = 0
max_score = 0

for i in range(N):
    for j in range(K):
        if i == 0 or i == N - 1 or j == 0 or j == K - 1:
            visibles += 1
        else:
            v = lines[i][j]
            hl = horizontal_fenwicks[i].ask(0, j - 1)
            hr = horizontal_fenwicks[i].ask(j + 1, K - 1)
            vu = vertical_fenwicks[j].ask(0, i - 1)
            vd = vertical_fenwicks[j].ask(i + 1, N - 1)
            is_visible = hl < v or hr < v or vu < v or vd < v
            if is_visible:
                visibles += 1
                score = get_score(i, j)
                if score > max_score:
                    max_score = score

print(visibles)
print(max_score)