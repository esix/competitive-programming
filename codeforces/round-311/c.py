#!/usr/bin/env python

n = int(raw_input())
ls = map(int, raw_input().split(' ')[0:n])
ds = map(int, raw_input().split(' ')[0:n])

es = [[] for i in range(201)]
ns = {}
unique_ls = set()

for i in xrange(n):
    l = ls[i]
    d = ds[i]
    unique_ls.add(l)
    es[d].append(l)

    if l not in ns:
        ns[l] = 0
    ns[l] += 1

for i in xrange(len(es)):
    es[i].sort()



unique_ls = list(unique_ls)
unique_ls.sort()
unique_ls.reverse()


num_of_legs_with_len_less = n
energy_to_remove_greater_legs = 0

min_e = -1

for l in unique_ls:
    num_of_legs_with_len_less -= ns[l]
    e = energy_to_remove_greater_legs

    for i in xrange(1,201):
        try:
            idx = es[i].index(l)
            energy_to_remove_greater_legs += (len(es[i]) - idx) * i
            es[i] = es[i][0:idx]
        except ValueError:
            pass

    should_remove_lower_legs = num_of_legs_with_len_less - ns[l] + 1
    if should_remove_lower_legs < 0: should_remove_lower_legs = 0
    for i in xrange(1,201):
        if should_remove_lower_legs == 0: break
        e += min(should_remove_lower_legs, len(es[i]))*i
        should_remove_lower_legs -= min(should_remove_lower_legs, len(es[i]))

    if min_e == -1 or e < min_e: min_e = e


print min_e
