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
