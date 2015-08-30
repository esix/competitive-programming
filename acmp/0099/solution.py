h, m, n = map(int, input().split())

f = []
for i in range(h):
    f.append([input() for j in range(m)])
    if i < h-1: input()

v = [[[False for k in range(n)] for j in range(m)] for i in range(h)]

def F(i, j, k):
    return (0 <= i < h and
            0 <= j < m and
            0 <= k < n and
            f[i][j][k] != 'o' and not v[i][j][k])

for i in range(h):
    for j in range(m):
        for k in range(n):
            z = f[i][j][k]
            if z == '1': st = (i,j,k)
            if z == '2': ei,ej,ek = i,j,k

ps = set([st])

a = -5
while not v[ei][ej][ek]:
    nps = set([])
    for pt in ps:
        i, j, k = pt
        v[i][j][k] = True
        if F(i+1,j,k): nps.add((i+1,j,k))
        if F(i,j+1,k): nps.add((i,j+1,k))
        if F(i,j-1,k): nps.add((i,j-1,k))
        if F(i,j,k+1): nps.add((i,j,k+1))
        if F(i,j,k-1): nps.add((i,j,k-1))
    ps = nps
    a += 5

print(a)
