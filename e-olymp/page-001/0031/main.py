#!/usr/bin/env python3

from datetime import datetime


n = int(input())
result = 0


def solve_year(year):
    result = 0
    for month in range(1, 13):
        date = datetime(year, month, 13)
        if date.weekday() == 4:
            result += 1
    return result


def solve(start_year, end_year):
    result = 0
    for year in range(start_year, end_year+1):
        result += solve_year(year)
    return result
        

for i in range(n):
    start_year, end_year = map(int, input().split(' '))
    result += solve(start_year, end_year)

print (result)