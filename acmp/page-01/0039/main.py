#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
c = list(map(int,inp.readline().split(' ')[0:n]))


cache = {}
def best(a,b):
    if a == b:
        return 0
    if (a,b) in cache:
        return cache[(a,b)]
    result = c[b-1] * (b-a)
    for i in range(a+1, b):
        tmp = best(a, i) + best(i, b)
        if tmp > result:
            result = tmp
    cache[(a,b)] = result
    return result

    
answer = str(best(0, n))


print(answer)
out.write(answer)
