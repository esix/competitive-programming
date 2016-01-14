n = int(input())
a = sorted(map(int, input().split(' ')[:n]))
d = [a[i] - a[i-1] for i in range(1,n)]

if n == 2:
    print(d[0])
    exit(0)

f = t = 0
for x in d[1:-1]:
    f, t = t, min(f, t) + x
print(d[0] + d[-1] + min(f,t))
