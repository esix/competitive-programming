inp = open('input.txt', 'r')
out = open('output.txt', 'w')


h1, m1, s1 = map(int,inp.readline().split(':')[0:3])
h2, m2, s2 = map(int,inp.readline().split(':')[0:3])

answer = [0 for i in range(10)]


def inc(h, m, s):
    digits = "%02d%02d%02d" % (h,m,s)
    for d in digits:
        answer[int(d)] += 1
    


while h1 != h2 or m1 != m2 or s1 != s2:
    inc(h1, m1,s1)

    s1 += 1
    if s1 == 60:
        m1 += 1
        s1 = 0
        if m1 == 60:
            h1 += 1
            m1 = 0
            if h1 == 24:
                h1 = 0

inc(h1, m1, s1)

print('\n'.join(map(str,answer)))
out.write('\n'.join(map(str,answer)))
