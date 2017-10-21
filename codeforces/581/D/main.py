import itertools

x1,y1,x2,y2,x3,y3 = map(int, input().split(' ')[:6])

A, B, C = (x1, y1,'A'),(x2,y2,'B'),(x3,y3,'C')


def rot(X, do_rot):
    return (X[1], X[0], X[2]) if do_rot else X


def solve_1(A,B,C):
    w = A[0] + B[0] + C[0]
    if A[1] == B[1] == C[1] == w:
        res = [['' for j in range(w)] for i in range(w)]
        for i in range(w):
            for j in range(w):
                if j < A[0]:
                    res[i][j] = A[2]
                elif j < A[0] + B[0]:
                    res[i][j] = B[2]
                else:
                    res[i][j] = C[2]
        return res


def solve_2(A,B,C):
    w = A[0] + B[0]
    if w == A[1] + C[1] and C[0] == w and B[1] == A[1]:
        res = [['' for j in range(w)] for i in range(w)]
        for i in range(w):
            for j in range(w):
                if i < A[1]:
                    if j < A[0]:
                        res[i][j] = A[2]
                    else:
                        res[i][j] = B[2]
                else:
                    res[i][j] = C[2]
        return res



for I, J, K in itertools.permutations([A,B,C]):
    for i in range(2):
        for j in range(2):
            for k in range(2):
                L = rot(I, i)
                M = rot(J, j)
                N = rot(K, k)
                v = solve_1(L,M,N)
                if not v:
                    v = solve_2(L,M,N)
                if v:
                    print(len(v))
                    for l in v:
                        print(''.join(map(str,l)))
                    exit(0)
print(-1)
