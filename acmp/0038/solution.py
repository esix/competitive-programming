#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = int(inp.readline())
l = list(map(int,inp.readline().split(' ')[0:n]))


cache = {}

def best(a,b):
    if a > b:
        return 0
    if a == b:
        return l[a]
    if (a, b) in cache:
        return cache[(a,b)]
    score = max(l[a] - best(a+1,b), l[b] - best(a, b-1))
    cache[(a,b)] = score
    return score
        
balance = best(0, n-1)
if balance > 0:
    answer = "1"
elif balance < 0:
    answer = "2"
else:
    answer = "0"


print(answer)
out.write(answer)
