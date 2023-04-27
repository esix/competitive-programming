# Corporation Salary [⬀](https://www.e-olymp.com/en/problems/4077)

You are working in the HR department of a huge corporation. Each employee may have several direct managers and/or several direct subordinates. Of course, his subordinates may also have their own subordinates, and his direct managers may have their own managers. We say employee x is a boss of employee y if there exists a sequence of employees a, b, ..., d, such that x is the manager of a, a is the manager of b, and so on, and d is the manager of y (of course, if x is a direct manager of employee y, x will be a boss of employee y). If a is a boss of b, then b can not be a boss of a. According to the new company policy, the salary of an employee with no subordinates is 1. If an employee has any subordinates, then his salary is equal to the sum of the salaries of his direct subordinates.

You will be given the relations among employees. Find the sum of the salaries of all the employees.

## Input

Contains multiple test cases. The first line of each test case contains the number of employees n (n ≤ 50). In the next n lines you are given the relations, where the j-th character of the i-th element is 'Y' if employee i is a direct manager of employee j, and 'N' otherwise.

## Output

For each test case print in a separate line the sum of the salaries of all the employees.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
1
N
4
NNYN
NNYN
NNNN
NYYN
6
NNNNNN
YNYNNY
YNNNNY
NNNNNN
YNYNNN
YNNYNN
```

## Output example #1
```
1
5
17
```
