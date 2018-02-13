#!/usr/bin/env python3

def is_win(p1, p2):
    return 1 if ((p1 == 'R' and p2 == 'S') or
                 (p1 == 'S' and p2 == 'P') or
                 (p1 == 'P' and p2 == 'R')) else 0


T = int(input())

for t in range(T):
    n = int(input())
    s1 = 0
    s2 = 0

    for i in range(n):    
        p1, p2 = input().split(' ')
        s1 += is_win(p1, p2)
        s2 += is_win(p2, p1)

    if s1 > s2:
        print("Player 1")
    elif s1 == s2:
        print("TIE")
    else:
        print("Player 2")
