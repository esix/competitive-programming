from itertools import combinations
S, k = input().split(' ')
for i in range(1, int(k) + 1):
    print('\n'.join(sorted(map(lambda x: ''.join(sorted(x)), combinations(S, i)))))

