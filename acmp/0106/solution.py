n = int(input())
a = [int(input()) for i in range(n)]
x = sum(a)
print(min(x, n-x))
