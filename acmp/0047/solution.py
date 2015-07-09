#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = int(inp.readline())

best = n

def is_better(a, b):
    sa = sum(map(int, str(a)))
    sb = sum(map(int, str(b)))
    if sa > sb: return True
    if sb < sa: return False
    return a < b


# dumb solution

for i in range(1,n+1):
    if n % i == 0:
        if is_better(i, best):
            best = i

answer = str(best)


print(answer)
out.write(answer)
