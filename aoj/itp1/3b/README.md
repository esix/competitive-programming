# Print Test Cases [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_3_B)

In the online judge system, a judge file may include multiple datasets to check whether the submitted program outputs a correct answer for each test case. This task is to practice solving a problem with multiple datasets.

Write a program which reads an integer x and print it as is. Note that multiple datasets are given for this problem.

## Input
The input consists of multiple datasets. Each dataset consists of an integer `x` in a line.

The input ends with an integer `0`. You program should not process (print) for this terminal symbol.

## Output

For each dataset, print `x` in the following format:
```
Case i: x
```

where `i` is the case number which starts with 1. Put a single space between `Case` and `i`. Also, put a single space between `:` and `x`.

## Constraints

- `1 ≤ x ≤ 10000`
- The number of datasets ≤ 10000

## Sample Input
```
3
5
11
7
8
19
0
```

## Sample Output
```
Case 1: 3
Case 2: 5
Case 3: 11
Case 4: 7
Case 5: 8
Case 6: 19
```
