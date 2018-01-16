a, b, c = map(float, input().split(' '))

if a >= b + c or b >= c + a or c >= a + b:
    print ("IMPOSSIBLE")
    exit (0)

def sqr(x):
    return x * x

def eq(x, y):
    return abs(x - y) < 1E-8

def get_cos(a, b, c):
    return (sqr(a) + sqr(b) - sqr(c)) / (2 * a * b)

cos_a = get_cos(a, b, c)
cos_b = get_cos(b, c, a)
cos_c = get_cos(c, a, b)


if eq(cos_a, 0) or eq(cos_b, 0) or eq(cos_c, 0):
    print ("RIGHT")
elif cos_a < 0 or cos_b < 0 or cos_c < 0:
    print ("OBTUSE")
else:
    print ("ACUTE")
    
