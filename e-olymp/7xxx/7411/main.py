#!/usr/bin/env python3

e = input()

op = 1 if e[1] == '+' else -1


if e[4] == 'x':
    x = int(e[0]) + op * int(e[2])
    print(x)
    exit(0)
    

if e[0] == 'x':
    a = int(e[2])
    a_sign = op
    x_sign = 1
else:
    a = int(e[0])
    a_sign = 1
    x_sign = op

b = int(e[4])

x = (b - a_sign * a) * x_sign

print(x)
