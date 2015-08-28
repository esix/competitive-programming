n,m=map(int, input().split(' '))
y,x=map(int, input().split(' '))
r = 1
while y != 1 and x != 1 and y != n and x != m:
    r += 2*n + 2*m - 4
    y -= 1
    x -= 1
    n -= 2
    m -= 2
if y == 1:
    r += x - 1
else:
    r += m - 1
    if x == m:
        r += y - 1
    else:
        r += n - 1
        if y == n:
            r += m - x
        else:
            r += m - 1
            r += n - y
print(r)
