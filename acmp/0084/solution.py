I = open('input.txt', 'r')
n, m = list(map(int, I.readline().split(' ')[0:2]))
ls = [I.readline().strip() for i in range(n)]
mini = n
maxi = 0
minj = m
maxj = 0
for i in range(n):
    for j in range(m):
        if ls[i][j] == '*':
            mini = min(mini, i)
            maxi = max(maxi, i)
            minj = min(minj, j)
            maxj = max(maxj, j)

ls = [['*' if mini <= i <= maxi and minj <= j <= maxj else '.' for j in range(m)] for i in range(n)]
ans = '\n'.join(map(lambda l: ''.join(l), ls))
print(ans)
open('output.txt', 'w').write(ans)
