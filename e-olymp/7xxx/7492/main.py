#!/usr/bin/env python3

segments = {
    '0': 6, 
    '1': 2, 
    '2': 5, 
    '3': 5, 
    '4': 4, 
    '5': 5, 
    '6': 6, 
    '7': 3, 
    '8': 7, 
    '9': 6
}

n = int(input())


def count(h, m):
    hh = "%02d" % h
    mm = "%02d" % m
    return segments[hh[0]] + segments[hh[1]] + segments[mm[0]] + segments[mm[1]]


for h in range(24):
    for m in range(60):
        c = count(h, m)
        if c == n:
            print("%02d:%02d" % (h, m))
            exit(0)

print("Impossible")
