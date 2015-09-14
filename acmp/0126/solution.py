n = int(input())
a = [list(map(int, input().split(' ')[:n])) for i in range(n)]
M = float("inf")
for i in range(n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            l = a[i][j] + a[j][k] + a[k][i]
            if l < M:
                M = l
print(M)
