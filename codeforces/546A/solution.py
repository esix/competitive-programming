k, n, w = map(int, input().split(' '))

cost = (2 * k + k * (w-1)) * w // 2
r = cost - n
print(r if r >= 0 else 0)
