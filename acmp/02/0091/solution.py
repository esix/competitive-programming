n = int(input())

a = [2,3,4,7]
ah = {2:True, 3:True,4:True,7:True}
b = [1]


def B(i):
    if i < len(b): return b[i]
    v = B(i-1) + 1
    while v in ah:
        v += 1
    b.append(v)
    return v



while len(b) < n or len(a) < n:
    i = len(a)
    v = B(i-1) + B(i-3)
    a.append(v)
    ah[v] = True

print(a[n-1])
print(b[n-1])
