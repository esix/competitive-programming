# Matrix Multiplication [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_D)

Write a program which reads a `n × m` matrix `A` and a `m × l` matrix `B`, and prints their product, a `n × l` matrix `C`. An element of matrix `C` is obtained by the following formula:
```
cᵢⱼ=∑ₖ₌₁ᵐaᵢₖbₖⱼ
```
where `aᵢⱼ`, `bᵢⱼ` and `cᵢⱼ` are elements of `A`, `B` and `C` respectively.

## Input

In the first line, three integers `n`, `m` and `l` are given separated by space characters

In the following lines, the `n × m` matrix `A` and the `m × l` matrix `B` are given.

## Output
Print elements of the `n × l` matrix `C` (`cᵢⱼ`). Print a single space character between adjacent elements.

## Constraints
- `1 ≤ n,m,l ≤ 100`
- `0 ≤ aᵢⱼ,bᵢⱼ ≤ 10000`

## Sample Input
```
3 2 3
1 2
0 3
4 5
1 2 1
0 3 2
```

## Sample Output
```
1 8 5
0 9 6
4 23 14
```
