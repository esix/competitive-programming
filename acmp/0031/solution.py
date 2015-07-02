import math

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n, k = map(int, inp.readline().split(' ')[0:2])

def subfactorial(n):
    return int((math.factorial(n) + 1) // math.e)

def c(n, k):
    numerator = math.factorial(n)
    denominator = (math.factorial(k) * math.factorial(n-k))
    answer = numerator//denominator
    return answer

def g(n, k):
    if n == k:
        return 1
    else:
        return c(n, k) * subfactorial(n-k)


answer = str(g(n, k))


print(answer)
out.write(answer)
