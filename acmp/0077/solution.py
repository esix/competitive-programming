#!/usr/bin/env python3

_mem = {}
def count(n, k):   # len(ones), zeros
    if n == k: return 1
    if n < k: return 0
    if n == 0: return 0
    if (n, k) in _mem:
        return _mem[(n,k)]
    res = count(n-1, k) + count(n-1, k-1)
    _mem[(n, k)] = res
    return res


def solve(n, k):
    s = bin(n)[3:]   # 0x1_____

    res = 0
    for i in range(k+1, len(s)+1):
        res += count(i-1, k)

    zeros = 0
    for i in range(len(s)):
        if s[i] == '1':
            if k - zeros - 1 >= 0:
                res += count(len(s) - i - 1, k - zeros - 1)
        else:
            zeros += 1

        if zeros > k:
            break

    if zeros == k: res += 1
    return res

n, k = map(int, open('input.txt', 'r').readline().split(' ')[0:2])
r = solve(n, k)
print(r)
open('output.txt', 'w').write(str(r))
