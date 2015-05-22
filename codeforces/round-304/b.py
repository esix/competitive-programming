#!/usr/bin/env python

n = int(raw_input())

as_ = map(int, raw_input().split(' ')[0:n])
as_.sort()


count = 0
pay = 0
a_prev = 0

for a in as_:
    if a != a_prev:
       
        free_cells = a - a_prev - 1

        for i in xrange(free_cells):
            if count > 0:
                pay += count
                count -= 1
            
        pay += count
        a_prev = a

    else:
        count += 1

pay += count
print pay