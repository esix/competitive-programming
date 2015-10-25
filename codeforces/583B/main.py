n = int(input())
a = list(map(int, input().split(' ')[:n]))
n_infos = 0
direction = 1
res = 0

while True:
    if direction == 1:
        r = range(n)
    else:
        r = range(n-1, -1, -1)

    for i in r:
        if n_infos >= a[i]:
            a[i] = float("inf")
            n_infos += 1

    if n_infos == n:
        break

    direction = -direction
    res += 1
print(res)
