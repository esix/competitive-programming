from math import sqrt 

S, d = map(int, input().split(' '))

# a - h = d;  1/2 * ah = S
# a = d + h;  (d+h)h = 2S
# h^2 + dh - 2S = 0

D = d*d + 8*S
h = (-d + sqrt(D)) / 2

print ("{0:.2f}".format(h))
