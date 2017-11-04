from math import sqrt

def heron(a, b, c):
    p = (a + b + c) / 2
    return sqrt(p * (p-a) * (p-b) * (p-c))

a, b, c, d, f = map(float, input().split(' '))
print ("{0:.4f}".format(heron(a, b, f) + heron(d, c, f)))