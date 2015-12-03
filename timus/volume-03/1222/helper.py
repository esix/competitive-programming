def mul(lst):
    res = 1
    for v in lst:
        res *= v
    return res

def split(n):
    if n == 1:
        return [[1]]
    res = [[n]]
    for i in range(1, n):
        lst = split(n - i)
        for l in lst:
            l.append(i)
            res.append(sorted(l))
    return res


for n in range(1, 30):
    lss = split(n)
    max_ls = lss[0]
    for ls in set(map(tuple, lss)):
        if mul(ls) > mul(max_ls):
            max_ls = ls
    print(n, max_ls, mul(max_ls))
