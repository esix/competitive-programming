# Simple Calculator [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_C)

Write a program which reads two integers `a`, `b` and an operator `op`, and then prints the value of `a op b`.

The operator `op` is '`+`', '`-`', '`*`' or '`/`' (sum, difference, product or quotient). The division should truncate any fractional part.

## Input
The input consists of multiple datasets. Each dataset is given in the following format.

```
a op b
```

The input ends with a dataset where `op` = '`?`'. Your program should not process for this dataset.

## Output
For each dataset, print the value in a line.

## Constraints
- `0 ≤ a, b ≤ 20000`
- No divisions by zero are given.

## Sample Input 1
```
1 + 2
56 - 18
13 * 2
100 / 10
27 + 81
0 ? 0
```

## Sample Output 1
```
3
38
26
10
108
```
