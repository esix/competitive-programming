#n, m = map(int, input().split()[:2])


def solve(n, m):
    if m > n:
        return solve(n, n) + n * (m - n)

    if m <= 7:
        return sum([n % i for i in range(1, m+1)])

    # Arithmetic progression
    v = solve(n, 7)

    num = m - 7
    a0 = n - 8
    delta = (2 * a0 - num + 1) * num // 2
    return v + delta


M = 20

def stringify(n, i, j):
    s = str(n)
    if i == j:
        s = '_' + s
    while len(s) < 3:
        s = ' ' + s
    return s

title = ' '.join([stringify(i, 0, 1) for i in range(1, M)])
print('     '  + title)
print('-' * 80)


for n in range(1, M):
    s = []
    for m in range(1, M):
        x = solve(n, m)
        s.append(stringify(x, n, m))
    print(stringify(n, 1, 0) + ': ' + ' '.join(s))
