#!/usr/bin/env python3

n = int(input())

m = [[False for j in range(n)] for i in range(n)]

k = int(input())

for i in range(k):
    a, b = map(int, input().split(' '))
    m[a-1][b-1] = True
    m[b-1][a-1] = True


def N(v):
    result = [i for i in range(n) if m[v][i]]
    return set(result)

def add1(n): return n+1

#for i in range(n):
#    print (i+1, ':', set(map(add1, N(i))))

best_clique = set({})

def BronKerbosch1(R, P, X):
    global best_clique

    if not P and not X:
        # print ("MAX CLIQUE=", set(map(add1, R)))
        if len(R) > len(best_clique):
            best_clique = R
        
    for v in P:
        BronKerbosch1(R | {v}, P & N(v), X & N(v))
        P = P - {v}
        X = X | {v}


BronKerbosch1(set(), set(range(n)),set())

print (len(best_clique))
print (' '.join(map(str, map(add1, best_clique))))