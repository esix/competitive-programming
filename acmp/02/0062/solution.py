#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')


fld = inp.readline().strip()
answer = 'BLACK' if (ord(fld[0]) + int(fld[1])) % 2 == 0 else 'WHITE'


print(answer)
out.write(answer)
