#!/usr/bin/env python3

n = int(input())
a = map(int, input().split(' ')[:n])
a = sorted(a)

b = [0 for i in range(n)]

i = 0
j = n - 1
is_first = True

for v in a:
    if is_first:
        b[i] = v
        i += 1
    else:
        b[j] = v
        j -= 1
    is_first = not is_first

print (' '.join(map(str, b)))
