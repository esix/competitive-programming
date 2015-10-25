k = int(input())

h = []

for i in range(k):
    h.append(int(input()))


ffs = [1]
def f(n):
    if n < len(ffs):
        return ffs[n]
    v = n * f(n-1)
    ffs.append(v)
    return v


def c(k, n):
    return f(n) // (f(k) * f(n-k))

def cc(k, n):
    return c(n-1, n + k-1)


def solve(h):
    if len(h) == 1:
        return 1

    hh = h[:-1]
    hh_len = sum(hh)

    return solve(hh) * cc(h[-1] -1, hh_len + 1)


r = 1
for i in range(len(h)):
    r *= cc(h[i] -1, sum(h[:i]) + 1)

print(r % 1000000007)
