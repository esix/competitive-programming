from itertools import product

K, M = map(int, input().split(' '))

def F(x):
    return x * x
    
def sum_mod(l):
    return sum(l) % M

lists = [list(map(F, map(int, input().split(' '))))[1:] for i in range(K)]

print(max(map(sum_mod, product(*lists))))
