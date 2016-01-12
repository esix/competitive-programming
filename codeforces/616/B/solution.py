n, m = map(int, input().split(' ')[:2])

c = [list(map(int, input().split(' ')[:m])) for _ in range(n)]

mins = list(map(min, c))

print(max(mins))
