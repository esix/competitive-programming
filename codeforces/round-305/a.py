#!/usr/bin/env python


s = raw_input()
k = int(raw_input())



def solve(s, k):
    if k == 0:
        return False if len(s) > 0 else True
    
    if len(s) % k != 0:
        return False
    
    cl = len(s) / k
    
    for i in xrange(k):
        if s[i*cl : (i+1)*cl ] != s[i*cl : (i+1) * cl][::-1]:
            return False

    return True



print "YES" if solve(s, k) else "NO"