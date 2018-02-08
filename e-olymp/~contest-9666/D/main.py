#!/usr/bin/env python3

n = int(input())

# def A000217(n):
#     return n * (n+1) // 2
 
# print (11 * A000217(n-1))

def sumOfDigits(n):
    s = 0;
    while n > 0:
        s += n % 10;
        n = n // 10
    return s

bySum = {}

for i in range(500000):
    s = sumOfDigits(i)
    if s not in bySum:
        bySum[s] = []
    bySum[s].append(i)

def solve(n):
    best_res = -1
    for ss in bySum.values():
        if len(ss) >= n:
            arr = ss[0:n]
            r = sum(arr)
            if best_res == -1 or best_res > r:
                best_res = r
    return best_res

if n == 1:
    print(1)
else:
    print(solve(n))
