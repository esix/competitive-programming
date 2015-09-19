n, m = map(int, input().split(' ')[:2])
if n == 0:
    print("Impossible")
    exit(0)
print(n + m - min(n,m), n + m - 1)
