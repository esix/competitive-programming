#!/usr/bin/env python3

n, m = map(int, input().split(' '))

level = [list(input()) for i in range(n)]
level.reverse()

for j in range(m):
    for i in range(n):
        if level[i][j] == 'o':
            k = i
            while k > 0 and (k == 0 or level[k-1][j] == '.'):
                k -= 1
            level[i][j], level[k][j] = level[k][j], level[i][j]

level.reverse()
print('\n'.join(map(lambda floor: ''.join(floor), level)))
