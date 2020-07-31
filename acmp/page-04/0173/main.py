#!/usr/bin/env python3
inp = open('input.txt', 'r')
out = open('output.txt', 'w')

def make_base(num, b, numerals="0123456789abcdefghijklmnopqrstuvwxyz"):
    return ((num == 0) and numerals[0]) or (make_base(num // b, b, numerals).lstrip(numerals[0]) + numerals[num % b])


n = int(inp.readline().strip())

results = []

for base in range(2, 37):
    n_with_base = make_base(n, base)
    if n_with_base == n_with_base[::-1]:
        results.append(str(base))

if len(results) == 0:
    answer = 'none'
elif len(results) == 1:
    answer = 'unique\n' + results[0]
else:
    answer = 'multiple\n' + ' '.join(results)

print(answer)
out.write(str(answer))
