a, b = map(int, input().split(' ')[:2])
d1 = min(a,b)
a -= d1
b -= d1

v = max(a,b)
d2 = v // 2
print(d1, d2)
