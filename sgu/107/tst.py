
n = 6
k = 5



def solve(n, k):
    result = 0
    s = '987654321'[-k:]
    for i in xrange(10**(n-1), 10**(n)):  # n-digits
        if str(i*i)[-k:] == s:
            #print i, i*i
            result += 1
    return result



def format(num):
    s = str(num)
    if len(s) < 8:
        s = ' ' * (8 - len(s))  + s
    return s


D = 12

line = "        ! "
for k in range(1,10):
    line += format(k)
print line
print '-' * (D*10+2)

for n in xrange(1, 20):
    line = format(n) + ': '
    for k in range(1, 10):
        line += format(solve(n, k))
    print line
