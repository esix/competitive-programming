import re
try:
    s = input().strip()
    n, m = map(int, re.split('\s+',s)[:2])
except:
    n = int(s)
    m = int(input())
es = [tuple(map(int, input().split(' ')[:3])) for i in range(m)]
INF = 30000
d = [INF for i in range(n)]
d[0] = 0
for i in range(n-1):
    for a, b, cost in es:
        a -= 1
        b -= 1
        if d[a] < INF:
            d[b] = min(d[b], d[a] + cost)
print(*d)
