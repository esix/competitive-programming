#!/usr/bin/env python3
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

def root(s):
    i = sum(map(int, s))
    return i if i <= 9 else root(str(i))

def is_happy(s):
    for i in range(0, len(s)):
        if root(s[0:i]) == root(s[i:]):
            return True
    return False


s = inp.readline().strip()
answer = "YES" if len(s) > 1 and is_happy(s) else "NO"

print(answer)
out.write(str(answer))
