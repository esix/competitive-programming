n, s, f = map(int, input().split(' '))
s -= 1
f -= 1
a = [list(map(int, input()  .split(' ')[:n])) for i in range(n)]
INF = float("inf")
d = [INF for i in range(n)]
d[s] = 0
u = [False for i in range(n)]

for i in range(n):

    v = -1
    for j in range(n):
        if not u[j] and (v == -1 or d[v] > d[j]):
            v = j

    u[v] = True

    for w in range(n):
        if v != w and a[v][w] != -1:
            d[w] = min(d[w], d[v] + a[v][w])


print(d[f] if d[f] != INF else -1)
