hash = {}

def c(l, v):
    if l == 1: return 1 if 0 <= v <= 9 else 0
    if((l,v) not in hash):
        hash[(l,v)] = sum([c(l-1, v - i) for i in range(10)])
    return hash[(l,v)]


n = int(input())//2
print(sum([c(n, i)**2 for i in range(9*n+1)]))
