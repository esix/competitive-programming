n = int(input())
d = [list(map(int, input().split(' ')[:n])) for i in range(n)]

for k in range(n):
    for i in range(n):
        for j in range(n):
            d[i][j] = min (d[i][j], d[i][k] + d[k][j])
for i in range(n):
    print(*d[i])
