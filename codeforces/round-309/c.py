k = int(raw_input())

h = []

for i in xrange(k):
    h.append(int(raw_input()))


ffs = [1]
def f(n):
    if n < len(ffs):
        return ffs[n]
    v = n * f(n-1) % 1000000007 
    ffs.append(v)
    return v


def c(k, n):
    return f(n) / (f(k) * f(n-k)) % 1000000007

def cc(k, n):
    return c(n-1, n + k-1)


def solve(h):
    if len(h) == 1:
        return 1

    hh = h[:-1]
    hh_len = sum(hh)

    a1 = solve(hh)
    a2 = cc(h[-1] -1, hh_len + 1)
    return a1 * a2 % 1000000007





print solve(h)