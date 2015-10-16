import sys
sys.setrecursionlimit(2000)

n = int(raw_input())
k = int(raw_input())

memo = dict()

memo[-1] = 0
memo[0] = 1

def f(i):
    if i in memo:
        return memo[i]
    v = (k-1) * f(i-1) + (k-1)*f(i-2)
    memo[i] = v
    return v
    
print f(n)
