n = int(input())
v = [0 for i in range(n)]
d = [0 for i in range(n)]
p = [0 for i in range(n)]

for i in range(n):
    v[i], d[i], p[i] = map(int, input().split(' ')[:3])

res = []

for i in range(n):
    if p[i] is None:
        continue
    else:
        res.append(i+1)

    crazy_indices = []

    delta_p = v[i]

    for j in range(i+1, n):
        if p[j] is None:
            continue

        if p[j] >= delta_p:
            p[j] -= delta_p
        else:
            p[j] = None
            crazy_indices.append(j)

        delta_p -= 1
        if delta_p <= 0:
            break


    for j in crazy_indices:
        delta_p = d[j]
        for k in range(j+1, n):
            if p[k] is not None:
                if p[k] >= delta_p:
                    p[k] -= delta_p
                else:
                    p[k] = None
                    delta_p += d[k]

print(len(res))
print(*res)
