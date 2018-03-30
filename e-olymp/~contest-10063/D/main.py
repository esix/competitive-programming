#!/usr/bin/env python3

s = input()

i1 = s.find('f')
i2 = s.rfind('f')

if i1 == -1:
    pass
elif i1 == i2:
    print (i1)
else:
    print(i1, i2)