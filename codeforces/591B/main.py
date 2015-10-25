n, m = map(int, input().split(' ')[:2])
s = input()[:n]

ls = {}

for c in s:
    ls[c] = c

for i in range(m):
    x, y = input().split(' ')[:2]
    if x not in ls:
        ls[x] = x
    if y not in ls:
        ls[y] = y
    ls[x], ls[y] = ls[y], ls[x]

rev = {}
for c, v in ls.items():
    rev[v] = c

print(''.join([rev[c] for c in s]))
