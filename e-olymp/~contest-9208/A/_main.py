#!/usr/bin/env python3

n, s, f = map(int, input().split(' '))

s -= 1
f -= 1

g = [list(map(int, input(' ').split(' '))) for i in range(n)]

q = [(s, 0)]

res = [-1 for i in range(n)]
visited = []

while q:
  v, cost = q[0]
  q = q[1:]

  if v == f:
    print (cost)
    exit(0)

  for i in range(n):
    if g[v][i] == 1:
      if i not in visited:
        visited.append(i)
        q.append((i, cost+1))

print(0)
