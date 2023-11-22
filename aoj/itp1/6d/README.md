# Matrix Vector Multiplication [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_6_D)

Write a program which reads a `n × m` matrix `A` and a `m × 1` vector `b`, and prints their product `Ab`.

A column vector with `m` elements is represented by the following equation.
```
    ⎛ b₁⎞
    ⎜ b₂⎟
b = ⎜ ⋮ ⎟
    ⎜ ⋮ ⎟
    ⎝ bₘ⎠
```

A `n × m` matrix with `m` column vectors, each of which consists of `n` elements, is represented by the following equation.

```
   ⎛ a₁₁  a₁₂  ⋅⋅⋅  a₁ₘ ⎞
   ⎜ a₂₁  a₂₂  ⋅⋅⋅  a₂ₘ ⎟
A= ⎜  ⋮    ⋮     ⋮    ⋮  ⎟
   ⎜  ⋮    ⋮     ⋮    ⋮  ⎟
   ⎝ aₙ₁  aₙ₂  ⋅⋅⋅  aₙₘ  ⎠
```

`i`-th element of a `m × 1` column vector `b` is represented by `bᵢ` (`i=1,2,…,m`), and the element in `i`-th row and `j`-th column of a matrix `A` is represented by `aᵢⱼ` (`i=1,2,…,n`, `j=1,2,…,m`).

The product of a `n × m`  matrix `A`  and a `m × 1` column vector `b` is a `n × 1` column vector `c`, and `cᵢ` is obtained by the following formula:
```
cᵢ= ∑ⱼ₌₁..ₘ aᵢⱼbⱼ = aᵢ₁b₁ + aᵢ₂b₂ + … + aᵢₘbₘ
```

## Input
In the first line, two integers `n` and `m` are given. In the following `n` lines, `aᵢⱼ`
 are given separated by a single space character. In the next `m` lines, `bᵢ` is given in a line.

## Output
The output consists of `n` lines. Print `cᵢ` in a line.

## Constraints
- `1 ≤ n,m ≤ 100`
- `0 ≤ bᵢ,aᵢⱼ ≤ 1000`

## Sample Input
```
3 4
1 2 0 1
0 3 0 1
4 1 1 0
1
2
3
0
```

## Sample Output
```
5
6
9
```
