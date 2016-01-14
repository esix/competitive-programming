A,B,C,O = [list(map(int, input().split(' '))) for i in range(4)]
def S(A,B,C):
    return abs((B[0]-A[0])*(C[1]-A[1]) - (B[1]-A[1])*(C[0]-A[0]))
print(['Out','In'][S(A,B,C) == S(A,B,O)+S(B,C,O)+S(C,A,O)])
