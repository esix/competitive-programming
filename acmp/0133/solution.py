n = int(input())
costs = list(map(int, input().split(' ')[:n]))
INF = float("inf")
m = int(input())

edges = [[] for i in range(n)]
for i in range(m):
    a, b = map(int, input().split(' ')[:2])
    edges[a-1].append(b-1)
    edges[b-1].append(a-1)

d = [INF for i in range(n)]
d[0] = 0
u = [False for i in range(n)]

for i in range(n):
    v = -1
    for j in range(n):
        if not u[j] and (v == -1 or d[v] > d[j]):
            v = j

    u[v] = True

    for w in edges[v]:
        d[w] = min(d[w], d[v] + costs[v])

print(d[-1] if d[-1] != INF else -1)
