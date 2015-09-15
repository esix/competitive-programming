n = int(input())
sx,sy = map(lambda s: int(s)-1, input().split(' '))
ex,ey = map(lambda s: int(s)-1, input().split(' '))

a = [[0 for j in range(n)] for i in range(n)]
l = [(sy, sx)]
while a[ey][ex] == 0:
    y, x = l.pop(0)
    for i in range(8):
        Y, X = y + [-1,-2,-2,-1,1,2,2,1][i], x + [2,1,-1,-2,-2,-1,1,2][i]
        if 0 <= X < n and 0 <= Y < n and a[Y][X] == 0:
            a[Y][X] = a[y][x] + 1
            l.append((Y,X))
print(a[ey][ex])
