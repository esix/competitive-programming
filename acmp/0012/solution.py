from math import *

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())


def sqr(x):
    return x * x

def d2(A, B):
    return sqr(A[0] - B[0]) + sqr(A[1] - B[1])

def d(A, B):
    return sqrt(d2(A, B))

def tris_l(a, b, c):
    p = (a + b + c) / 2
    return sqrt(p * (p-a) * (p-b) * (p-c))

def tris(A, B, C):
    ab = d(A, B)
    bc = d(B, C)
    ca = d(C, A)
    return tris_l(ab, bc, ca)


def in_rectangle(O, A, B, C, D):
    s_OAB = tris(O, A, B)
    s_OBC = tris(O, B, C)
    s_OCD = tris(O, C, D)
    s_ODA = tris(O, D, A)
    s_ABCD = d(A, B) * d(B, C)
    s = s_OAB + s_OBC + s_OCD + s_ODA

    return abs(s - s_ABCD) < 1e-4

result = 0
for i in range(n):
    x, y, x1, y1, x2, y2, x3, y3, x4, y4 = map(int, inp.readline().split(' ')[0:10])
    if in_rectangle((x, y), (x1, y1), (x2, y2), (x3, y3), (x4, y4)):
        result += 1

print(result)

out.write(str(result))
