n = int(input())
a1 = list(map(int, input().split(' ')[:n-1]))
a2 = list(map(int, input().split(' ')[:n-1]))
b = list(map(int, input().split(' ')[:n]))

x1 = 0
x2 = b[0]
cross = 0

for i in range(1, n):
    x1 = x1 + a1[i-1]
    cross_way = x1 + b[i]
    pass_way = x2 + a2[i-1]
    if cross_way < pass_way:
        cross = i
        x2 = cross_way
    else:
        x2 = pass_way

b[cross] = float("inf")
w1 = x2

x1 = 0
x2 = b[0]

for i in range(1, n):
    x1 = x1 + a1[i-1]
    cross_way = x1 + b[i]
    pass_way = x2 + a2[i-1]
    x2 = min(cross_way, pass_way)

print(w1 + x2)
