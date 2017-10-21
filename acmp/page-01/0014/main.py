inp = open('input.txt', 'r')
out = open('output.txt', 'w')

a, b = map(int, inp.readline().split(' ')[0:2])


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def lcm(a, b):
    return a * b // gcd(a,b)

answer = str(lcm(a,b))

print(answer)
out.write(answer)
