n, s = map(int, input().split(' ')[:2])

res = 0

for i in range(n):
    f, t = map(int, input().split(' ')[:2])
    time = max(t, s-f) + f
    res = max(res, time)

print(res)
