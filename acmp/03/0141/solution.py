n = int(input())

a = [list(map(int, input().split(' ')[:n])) for i in range(n)]

num_of_edges = sum(map(sum, a)) // 2
if num_of_edges != n-1:
    print("NO")
    exit(0)

q = [0]
vertex = set()

while len(q):
    s = q[0]
    q = q[1:]
    vertex.add(s)
    for i in range(n):
        if a[s][i] == 1 and i not in vertex:
            q.append(i)

if len(vertex) != n:
    print("NO")
    exit(0)

print("YES")
