#!/usr/bin/env python3

def sum_of_digits(number):
    return sum(map(int, str(number)))

k = int(input())

n = 0
page = 1

while page <= k:
    page = page + sum_of_digits(page)
    n += 1

print(n)