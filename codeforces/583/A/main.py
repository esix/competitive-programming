n = int(input())
ys = [False for i in range(n)]
xs = [False for i in range(n)]
res = []

for i in range(1, n*n+1):
    x, y = map(int, input().split(' ')[:2])
    x -= 1
    y -= 1
    if not ys[y] and not xs[x]:
        res.append(i)
        ys[y] = True
        xs[x] = True

print(*res)
