import re

toks = []
for m in re.finditer(r"(\d+|\(|\)|=)", input()):
    try:
        toks.append(int(m.group(0)))
    except:
        toks.append(m.group(0))

z = []
for i in range(len(toks)):
    t = toks[i]
    if i == len(toks) - 1:
        z.append(t)
    else:
        t1 = toks[i+1]
        if t == '=' or t1 == '=' or t == '(' or t1 == ')':
            z.append(t)
        else:
            z.append(t)
            z.append('P')

def e(zs):
    s = []
    rpn = []
    for z in zs:
        if type(z) is int:
            rpn.append(z)
        elif z == '(':
            s.append(z)
        elif z == ')':
            while s[-1] != '(':
                rpn.append(s.pop())
            s.pop()
        else:
            while len(s) > 0 and s[-1] != '(':
                rpn.append(s.pop())
            s.append(z)
    while len(s):
        rpn.append(s.pop())

    s = []
    for z in rpn:
        if type(z) is int:
            s.append(z)
        elif z == '+':
            s.append(s.pop() + s.pop())
        elif z == '*':
            s.append(s.pop() * s.pop())
        elif z == '-':
            s.append(-s.pop() + s.pop())

    return s[0]

def evl(z):
    try:
        i = z.index('P')
        zz = z[:]
        for c in '*+-':
            zz[i] = c
            evl(zz)
    except ValueError as ex:
        i = z.index('=')
        if e(z[:i]) == e(z[i+1:]):
            print(''.join(map(str,z)))
            exit(0)


evl(z)
print(-1)
