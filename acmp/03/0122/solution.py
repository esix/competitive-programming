n = int(input())
a = list(map(int, input().split(' ')[:n]))

d = []
for i in range(n):
    d.append(1)
    for j in range(i):
        if a[j] < a[i]:
            d[i] = max(d[i], 1 + d[j]);

print(max(*d))
