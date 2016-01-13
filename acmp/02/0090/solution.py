O = tuple(map(int,input().split(' ')))
k = int(input())

def S(A,B,C):
    return abs((B[0]-A[0])*(C[1]-A[1]) - (B[1]-A[1])*(C[0]-A[0]))

ans = []
for i in range(k):
    ax, ay, bx, by, cx, cy = map(int,input().split(' '))
    A, B, C = (ax, ay),(bx,by),(cx,cy)
    s0 = S(A,B,C)
    s = (S(A,B,O),S(B,C,O),S(C,A,O))
    if s[0] != 0 and s[1] != 0 and s[2] != 0 and s0 == sum(s):
        ans.append(i+1)

print(len(ans))
print(*ans)
