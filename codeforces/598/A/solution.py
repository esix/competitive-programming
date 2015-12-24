T = int(input())

for t in range(T):
    n = int(input())
    sum = n * (n + 1) // 2
    x = 1
    while x <= n:
        sum -= 2 * x
        x *= 2
    print(sum)
