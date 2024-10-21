# Distance II [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_D)

Your task is to calculate the distance between two `n` dimensional vectors `x={x₁, x₂, ..., xₙ}` and `y = {y₁, y₂, ..., yₙ}`.

The Minkowski's distance defined below is a metric which is a generalization of both the Manhattan distance and the Euclidean distance.

$$D_{xy}= \left( \sum_{k=1}^n | x_i - y_i|^p \right)^{1/p}$$

- It can be the Manhattan distance $$D_{xy}= \left|x_1 - y_1\right| + \left|x_2 - y_2\right| + ... + \left|x_n - y_n\right|$$ where `p = 1`

- It can be the Euclidean distance $$D_{xy}= \sqrt{\left(x_1 - y_1\right)^2 + \left(x_2 - y_2\right)^2 + ... + \left(x_n - y_n\right)^2}$$ where `p = 2`.

- Also, it can be the Chebyshev distance $$D_{xy}= max_{i=1}^n \left|x_i - y_i\right|$$ where `p = ∞`

Write a program which reads two `n`-dimensional vectors `x` and `y`, and calculates Minkowski's distance where `p` = `1`, `2`, `3`, `∞` respectively.

## Input
In the first line, an integer `n` is given. In the second and third line, 
`x={x₁, x₂, ..., xₙ}` and `y = {y₁, y₂, ..., yₙ}` are given respectively. The 
elements in `x` and `y` are given in integers.

## Output
Print the distance where `p` = `1`, `2`, `3` and `∞` in a line respectively. The 
output should not contain an absolute error greater than 10⁻⁵.

## Constraints
- `1 ≤ n ≤ 100`
- `0 ≤ xᵢ,yᵢ ≤1000`

## Sample Input
```
3
1 2 3
2 0 4
```

## Sample Output
```

4.000000
2.449490
2.154435
2.000000
```
