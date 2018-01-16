#!/usr/bin/env python3 

a, b = input().split('+')

_rdecode = dict(zip('MDCLXVI', (1000, 500, 100, 50, 10, 5, 1)))
 
def decode_roman(roman):
    result = 0
    for r, r1 in zip(roman, roman[1:]):
        rd, rd1 = _rdecode[r], _rdecode[r1]
        result += -rd if rd < rd1 else rd
    return result + _rdecode[roman[-1]]


anums = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
rnums = "M CM D CD C XC L XL X IX V IV I".split()
 
def encode_roman(x):
    ret = []
    for a,r in zip(anums, rnums):
        n,x = divmod(x,a)
        ret.append(r*n)
    return ''.join(ret)

a = decode_roman(a)
b = decode_roman(b)

print (encode_roman(a + b))
