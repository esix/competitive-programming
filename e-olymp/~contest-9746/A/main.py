#!/usr/bin/env python3

n, k = map(int, input().split(' '))


zs = [i for i in range(n)]
fs = []
ss = []

m = 0

while True:
    s_zs = []       # zero-pancakes on sarten
    s_fs = []       # first-pancakes on sarten

    s_zs = zs[:k]   # put max of k zero-pankakes on sarten
    zs = zs[k:]     # 


    if len(s_zs) < k:
        l = k - len(s_zs)
        s_fs = fs[:l]
        fs = fs[l:]

    if not s_zs and not s_fs:
        break

    m += 2

    fs += s_zs
    ss += s_fs

print(m)
