ad = dict()

na = int(input())
for i in range(0, na):
    a = int(input())
    ad[10000-a] = True


nb = int(input())
for i in range(0, nb):
    b = int(input())
    if b in ad:
        print("YES")
        exit()

print("NO")
