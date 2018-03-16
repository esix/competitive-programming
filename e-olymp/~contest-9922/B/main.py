#!/usr/bin/env python3

N = 300001
ps = [True for i in range(N)]
ps[0] = False
ps[1] = False

for i in range(2, 548):
    k = i + i
    while k < N:
        ps[k] = False
        k += i

m, n = map(int, input().split())
is_printed = False

for i in range(m, n+1):
    if ps[i]:
        print(i)
        is_printed = True

if not is_printed:
    print ("Absent")
    

