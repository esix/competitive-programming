n, m = map(int, input().split(' '))
a = [list(map(int, input().split(' ')[:m])) for i in range(n)]
for i in range(n):
    for j in range(m):
        if i == 0 and j == 0:
            pass
        elif i == 0:
            a[i][j] += a[i][j-1]
        elif j == 0:
            a[i][j] += a[i-1][j]
        else:
            a[i][j] += min(a[i][j-1], a[i-1][j])
print(a[n-1][m-1])
