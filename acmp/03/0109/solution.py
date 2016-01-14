a, b = map(int, input().split('/'))
z = a // b
a %= b
h = []
aa = [a]
while a != 0:
    a *= 10
    h.append(str(a // b))
    a %= b
    if a in aa:
        i = aa.index(a)
        print (str(z) + '.' + ''.join(h[:i]) + '(' + ''.join(h[i:]) + ')')
        exit(0)
    aa.append(a)

print (str(z) + ('.' + ''.join(h) if len(h) else ''))
