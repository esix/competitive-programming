from math import pi, sqrt
S, R = map(float, input().split(' '))
print ("{0:.2f}".format(sqrt(R * R - S / pi)))
