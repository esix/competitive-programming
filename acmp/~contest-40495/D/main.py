n, a, b = map(int, input().split(' ')[:3])

l = []
for i in range(n):
    p, q, s = map(int, input().split(' ')[:3])
    l.append((p,q,s))


def ti(i, T):
    p, q, s = l[i]
    return max(0, (p - s*T) / q)


def val(T):
    t_sum = sum([ti(i,T) for i in range(n)])
    return a * t_sum + b * T


m = 0
M = 10000000

#vm = val(m)
#vM = val(M)

while(True):
    os = [m * i/10 + M * (1-i/10) for i in range(11)]
    vs = [val(o) for o in os]

    i = vs.index(min(vs))
    m, vm = os[i], vs[i]
    del os[i]
    del vs[i]

    i = vs.index(min(vs))
    M, vM = os[i], vs[i]
    del os[i]
    del vs[i]

    if m > M:
        m, vm, M, vM = M, vM, m, vm

#    if vm < vM:
#        M, vM = o, vo
#    else:
#        m, vm = o, vo

    if abs(vM - vm) < 1e-20:
        break




T = m

print(round(val(T),6))
print(round(T,6))
print(*[round(ti(i,T),6) for i in range(n)])
