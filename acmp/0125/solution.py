n = int(input())
a = [list(map(int, input().split(' ')[:n])) for i in range(n)]
input()
b = list(map(int, input().split(' ')[:n]))
r = 0
for i in range(n):
    r += sum([b[i] != b[j] for j in range(i,n) if a[i][j]])

print(r)
