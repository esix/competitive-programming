k = int(input())
ns = list(map(int, input().split(' ')[0:k]))
ns.sort()
# take biggest half of groups with lower members number and sum their biggest half
print(sum(map(lambda n: n // 2 + 1, ns[0:k // 2 + 1])))
