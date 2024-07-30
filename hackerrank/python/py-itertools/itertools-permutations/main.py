from itertools import permutations
(S, k) = input().split()
print('\n'.join(sorted(map(lambda l: ''.join(l), permutations(S, int(k))))))

