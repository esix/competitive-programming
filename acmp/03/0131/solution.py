n = int(input())
V, I = -1,-2
for i in range(n):
    v,s = map(int, input().split(' '))
    if s == 1 and v > V:
        V, I = max(v,V), i
print(I+1)
