n = int(input())
s, e = map(int, input().split(' ')[:2])
s -= 1
e -= 1
INF = float("inf")
edges = [[] for i in range(n)]

r = int(input())
for i in range(r):
    a, time_start, b, time_end = map(int, input().split(' ')[:4])
    edges[a-1].append((b-1, time_start, time_end))

d = [INF for i in range(n)]
d[s] = 0
u = [False for i in range(n)]

for i in range(n):
    v = -1
    for j in range(n):
        if not u[j] and (v == -1 or d[v] > d[j]):
            v = j

    u[v] = True

    for w, time_start, time_end in edges[v]:
        if time_start >= d[v]:
            d[w] = min(d[w], time_end)

print(d[e] if d[e] != INF else -1)
