#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


n = int(inp.readline())

def round(n):
    e = 271828182845904523536028750
    res = e // 10**(26-n)
    rem = (e % 10**(26-n)) // (10**(25-n))
    if rem >= 5:
        res += 1
    return res

answer = str(round(n))
if len(answer) > 1:
    answer = answer[0] + '.' + answer[1:]
print(answer)
out.write(answer)
