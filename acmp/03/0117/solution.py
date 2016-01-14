n = int(input())
A = list(set([tuple(map(int, input().split(' ')[0:2])) for i in range(n)]))
n = len(A)

if n < 2:
    print(0)
    exit(0)

P = list(range(n))
for i in range(1,n):
    if A[P[i]][0]<A[P[0]][0]:
      P[i], P[0] = P[0], P[i]

def rotate(A,B,C):
    return (B[0]-A[0])*(C[1]-B[1])-(B[1]-A[1])*(C[0]-B[0])


for i in range(2,n):
    j = i
    while j>1 and (rotate(A[P[0]],A[P[j-1]],A[P[j]])<0):
        P[j], P[j-1] = P[j-1], P[j]
        j -= 1

L = [P[0],P[1]]
for i in range(2,n):
    while rotate(A[L[-2]],A[L[-1]],A[P[i]])<0:
        L.pop()
    L.append(P[i])

def S(A,B,C):
    return abs((B[0]-A[0])*(C[1]-A[1]) - (B[1]-A[1])*(C[0]-A[0]))

o = 0
for i in range(2,len(L)):
    o += S(A[L[0]], A[L[i-1]], A[L[i]])

print(o//2 + o%2)
