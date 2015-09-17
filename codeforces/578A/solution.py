a, b = map(int, input().split(' ')[:2])

mx = b
n = (a - b) // (2*b)

if n < 0:
    print(-1)
    exit(0)

dx = a - (2*n+1)*b

ddx = dx / (2*n+2)

print(b+ddx)
