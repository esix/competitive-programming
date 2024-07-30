from itertools import combinations
N = int(input())
l = map(lambda c: 1 if c == 'a' else 0, input().split(' '))
K = int(input())
results = list(map(lambda x: 1 if 1 in x else 0, combinations(l, K)))
print(sum(results) / len(results))

