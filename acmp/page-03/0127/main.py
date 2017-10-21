n = int(input())
a = [list(map(int, input().split(' ')[:n])) for i in range(n)]
s, e = map(int, input().split(' '))
s -= 1
e -= 1
d = {
    s: 0
}
v = [s]
while e not in v:
    if len(v) == 0:
        print(-1)
        exit(0)
    i = v.pop(0)
    for j in range(n):
        if a[i][j] and j not in d:
            d[j] = d[i] + 1
            v.append(j)

print(d[e])
