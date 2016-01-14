n = int(input())
l = list(map(int, input().split(' ')[:n]))
l.reverse()
print(*l)
