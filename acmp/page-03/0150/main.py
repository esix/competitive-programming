n, s = map(int, input().split(' '))

a = [list(map(int, input().split(' ')[:n])) for i in range(n)]
s -= 1

q = [s]
friends = set()

while len(q):
    s = q[0]
    q = q[1:]
    friends.add(s)
    for i in range(n):
        if a[s][i] == 1 and i not in friends:
            q.append(i)

print(len(friends) - 1)
