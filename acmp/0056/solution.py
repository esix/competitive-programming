#!/usr/bin/env python3

inp = open('input.txt', 'r')
out = open('output.txt', 'w')

n = int(inp.readline())
friended = set([inp.readline().strip() for i in range(n)])
m = int(inp.readline())
frienden = set([inp.readline().strip() for i in range(m)])
mutual = friended.intersection(frienden)
frienden.difference_update(mutual)

answer = '\n'.join([
    'Friends: ' + ', '.join(sorted(friended)),
    'Mutual Friends: ' + ', '.join(sorted(mutual)),
    'Also Friend of: ' + ', '.join(sorted(frienden))
])

print(answer)
out.write(answer)
