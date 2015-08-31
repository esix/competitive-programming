def slv(f,m,n,k):
    if k == 1: return m*n - sum(map(sum,f))
    if m < k: return 0
    r = slv([f[j][:] for j in range(1,m)], m-1, n, k)
    for i in range(n):
        if f[0][i] == 0:
            g = [f[j][:] for j in range(1,m)]
            for j in range(1, m):
                g[j-1][i] = 1
                if i-j >= 0:g[j-1][i-j] = 1
                if i+j < n: g[j-1][i+j] = 1
            if i+2 < n: g[0][i+2] = 1
            if i-2 >=0: g[0][i-2] = 1
            if m > 2 and i+1 < n: g[1][i+1] = 1
            if m > 2 and i-1 >=0: g[1][i-1] = 1
            r += slv(g, m-1, n, k-1)
    return r

#n, k = map(int, input().split(' '))
#print(slv([[0 for j in range(n)] for i in range(n)],n,n,k))
precalc = [[slv([[0 for j in range(n)] for i in range(n)],n,n,k) for k in range(1,n+1)] for n in range(1,11)]
print(precalc)
