n = int(input())

a, b = 0, 1
for i in range(1, n+1):
    a, b = b, a+b

print(a)
