#!/usr/bin/env python3

def solve(ss, mm):
    DS = 0
    DM = 0
    for i in range(1, len(ss)):
        ds = ss[i] - ss[i-1]
        dm = mm[i-1] - mm[i]
        if dm > 0:
            DS += ds
            DM += dm
    return round(DS / DM * mm[-1])


while True:
    s, m = map(float, input().split())
    if s == -1:
        exit(0)

    ss = []
    mm = []
    
    while not(s == 0 and m == 0):
        ss.append(s)
        mm.append(m)
        s, m = map(float, input().split())

    print(solve(ss, mm))

