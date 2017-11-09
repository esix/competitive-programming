from math import sqrt, pi, tan, atan2, cos

a, b, z = map(int, input().split(' '))

z_rad = z * pi / 180
c = a * sqrt(2) / 2

if z_rad <= atan2(b, c):
    # case 1: point is on bord
    h = c * tan(z_rad)
    l = sqrt(c * c + h * h)
    res = c * l
else:
    z = 90 - z
    z_rad = z * pi / 180
    h = b / cos(z_rad)
    l = b * tan(z_rad)
    t = (c - l) * 2
    res = (2*c + t) * h / 2

print ("{0:.3f}".format(res))
