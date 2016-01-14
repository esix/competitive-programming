n, m = map(int, input().split())

def linear(a):
    ans = a[0]
    sum = 0
    for r in range(len(a)):
        sum += a[r]
        ans = max (ans, sum)
        sum = max (sum, 0);
    return ans

def part_sums(l):
    n = len(l)
    res = [[0 for j in range(n)] for i in range(n)]
    for i in range(n):
        s = 0
        for j in range(i, n):
            s += l[j]
            res[i][j] = s
    return res

M = [part_sums(list(map(int, input().split( )[:m]))) for i in range(n)]
S = -1000000

for j in range(m):
    for k in range(j, m):
        a = [M[i][j][k] for i in range(n)]
        s = linear(a)
        if s > S:
            S = s

print(S)
