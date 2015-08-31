A = tuple(map(int, input().split(' ')))
B = tuple(map(int, input().split(' ')))
C = tuple(map(int, input().split(' ')))
O = tuple(map(int, input().split(' ')))

def S(A,B,C):
    return abs((B[0]-A[0])*(C[1]-A[1]) - (B[1]-A[1])*(C[0]-A[0]))

print('In' if S(A,B,C) == S(A,B,O)+S(B,C,O)+S(C,A,O) else 'Out')
