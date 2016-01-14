n, m = map(int, input().split(' '))
a = [list(map(int, input().split(' ')[:m])) for i in range(n)]
o = []
for i in range(n):
    for j in range(m):
        if a[i][j] == 1:
            o.append((i,j))
            a[i][j] = 0
        else:
            a[i][j] = -1


while len(o):
    i, j = o.pop(0)
    for k in range(4):
        I, J = i + [0,-1,0,1][k], j + [1,0,-1,0][k]
        if 0 <= I < n and 0 <= J < m and a[I][J] == -1:
            a[I][J] = a[i][j] + 1
            o.append((I,J))
for i in range(n):
    print(*a[i])
