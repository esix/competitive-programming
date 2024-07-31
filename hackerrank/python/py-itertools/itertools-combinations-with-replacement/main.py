from itertools import combinations_with_replacement
S, k = input().split(' ')
print('\n'.join(sorted(map(lambda x: ''.join(sorted(x)), combinations_with_replacement(S, int(k))))))

