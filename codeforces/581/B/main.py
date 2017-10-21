n = int(input())
a = list(map(int, input().split(' ')[:n]))
b = [0 for i in range(n)]
m = 0
for i in range(n-1, -1, -1):
    b[i] = max(0, m - a[i] + 1)
    m = max(m, a[i])

print(*b)
