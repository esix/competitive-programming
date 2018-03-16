# [Stepan and pairs](https://www.e-olymp.com/en/problems/4283)
At the last time Stepan is very interested in pairs of numbers, and instead of pairs he is interested in greater common divisor, lets denote it as `GCD(x, y)`. Now Stepan has an integer n and he is interested in the next information: how many pairs of integers `(i, j)` exist such that `1 ≤ i`, `j ≤ n` and `i = GCD(i, j)`.

Help him to solve this problem.

## Input
One integer n (1 ≤ n ≤ 10⁶).

## Output
Print the number of required pairs.

## Input example #1
```
1
```

## Output example #1
```
1
```

## Input example #2
```
4
```

## Output example #2
```
8
```

## Input example #3
```
10
```

## Output example #3
```
27
```

## Example description: 
В первом примере подходящей парой есть пара (1, 1), так как НОД(1, 1) = 1. 

Во втором примере подходят 8 пар чисел: (1, 1), (1, 2), (1, 3), (1, 4), (2, 2), (2, 4), (3, 3), (4, 4).