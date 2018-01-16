from math import sqrt

def sqr(x):
    return x * x

s1, s2, s3 = map(float, input().split(' '))

# for each pair: see one side
# l1 / L = sqrt(s1/s), l2 / L = sqrt(s2/s) - semblables
# l1 + l2 = L
# => L*sqrt(S1/S)+L*sqrt(S2/S)=L
# => s = sqr(sqrt(s1) + sqrt(s2))

s12 = sqr(sqrt(s1) + sqrt(s2))
s23 = sqr(sqrt(s2) + sqrt(s3))
s31 = sqr(sqrt(s3) + sqrt(s1))

print (s12 + s23 + s31 - s1 - s2 - s3)