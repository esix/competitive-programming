n, k = map(int, input().split(' ')[:2])

def slv(n):
    if n == 1:
        return k - 1
    if n == 2:
        return k * k - k
    return (k - 1) * (slv(n-1) + slv(n-2))

print(slv(n))
