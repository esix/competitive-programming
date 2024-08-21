from collections import Counter

n = int(input())
values = Counter([input() for i in range(n)]).values()
print(len(values))
print(' '.join(map(str, values)))

