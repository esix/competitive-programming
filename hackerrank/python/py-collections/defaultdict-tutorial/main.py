from collections import defaultdict
n, m = map(int, input().split(' '))
d = defaultdict(list)
for i in range(1, n + 1):
    d[input()].append(i)

for i in range(m):
    print(' '.join(map(str, d[input()])) or '-1')

