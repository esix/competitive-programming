#!/usr/bin/env python3


g = []
n = 0
salaries = []

def get_salary(a):
    global salaries
    if salaries[a] != -1:
        return salaries[a]

    salary = 0
    for i in range(n):
        if g[a][i] == 'Y':
            salary += get_salary(i)
    
    if salary == 0:
        salary = 1

    salaries[a] = salary
    return salary
  


def solve():
    global salaries
    salaries = [-1 for i in range(n)]
    result = 0
    for i in range(n):
        result += get_salary(i)
    return result


while True:
    try:
        n = int(input())
    except (ValueError, EOFError):
        break

    g = [input() for i in range(n)]
    print(solve())
