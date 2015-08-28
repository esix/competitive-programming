n = int(input())
gs = [input() for i in range(n)]

def c(a,b):
    if len(a)!=len(b):return 0
    n = 0
    for i in range(len(a)):
        if a[i] != b[i]:
            n+=1
        if n > 1: return 0
    return n

n = int(input())
bs = [input() for i in range(n)]
print(*[sum([c(b,g) for b in bs]) for g in gs])
