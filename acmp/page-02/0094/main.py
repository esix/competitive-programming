import math
n,m,k = map(int,input().split(' '))

if n <= k:
    print (1 if m <= n else "NO")
else:
    print(math.ceil((m - k) / (n-k)))
