s = lambda n, k: 1 if n == 1 else 1 + (s(n-1,k) + k - 1)% n

print(s(*map(int, input().split(' '))))
