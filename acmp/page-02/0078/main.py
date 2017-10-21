#!/usr/bin/env python3
f, p = map(int, open('input.txt', 'r').readline().split(' ')[0:2])
a = f

#   a[i] = a[i-1] % f + p * (a[i] // f)
#   a[5] = f
#   a[1] = ?
#
#   ]a[i-1] = x*f + y
#   a[i] = y + px
#   0 <= y < f
#   y higher is better
#  => find biggest y < f: (a-y) % p == 0
#     then find x = (a[i-1] - y) // p
#     then find a[i] = x*f+y

for i in range(4):
    #y = a - (a // p) * p
    #for y in range(f-1,-1,-1):
    #    if (a-y)%p == 0:
    #        break
    if (a - f + 1) % p == 0:
        y = f-1
    else:
        y = a - (((a - f + 1)//p) + 1) * p
    x = (a - y) // p
    #print( y , "+ p *", x, "=", a)
    a = x * f + y
    #print("a=",a)


open('output.txt', 'w').write(str(a))
