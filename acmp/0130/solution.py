a, b = map(lambda s: (ord(s[0])-97,int(s[1])-1), input().split(' ')[:2])
f = [[0 for j in range(8)] for i in range(8)]
l = [a]
while f[b[0]][b[1]] == 0:
    y, x = l.pop(0)
    for i in range(8):
        Y, X = y + [-1,-2,-2,-1,1,2,2,1][i], x + [2,1,-1,-2,-2,-1,1,2][i]
        if 0 <= X < 8 and 0 <= Y < 8 and f[Y][X] == 0:
            f[Y][X] = f[y][x] + 1
            l.append((Y,X))
v = f[b[0]][b[1]]
print(-1 if v % 2 else v//2)
