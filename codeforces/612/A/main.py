n, p, q = map(int, input().split(' ')[:3])
s = input()[:n]

a = 0
b = 0

while True:
    if a * p + b * q == n:
        break
    a += 1
    if a * p > n:
        a = 0
        b += 1
        if b * q > n:
            print(-1)
            exit(0)

print(a + b)

z = 0
for i in range(a):
    print(s[z:z+p])
    z += p

for i in range(b):
    print(s[z:z+q])
    z += q
