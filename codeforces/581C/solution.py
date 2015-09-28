n, k = map(int, input().split(' ')[:2])
a = list(map(int, input().split(' ')[:n]))
b = [0 for i in range(101)]

rating = 0

for i in a:
    b[i]+=1
    rating += i // 10

for last_dig in range(9, 0, -1):
    for first_dig in range(10):
        v = first_dig * 10 + last_dig
        need_for_one = 10 - last_dig
        can_use = min(b[v], k // need_for_one)
        k -= can_use * need_for_one
        b[v] -= can_use
        b[(first_dig + 1) * 10] += can_use
        rating += can_use

z = k // 10

for first_dig in range(10):
    v = first_dig * 10
    can_use = min(z, b[v])
    b[first_dig * 10] -= can_use
    b[(first_dig + 1)* 10] += can_use
    z -= can_use
    rating += can_use

print(rating)
