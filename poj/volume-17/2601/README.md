# Simple calculations [⬀](http://poj.org/problem?id=2601)

## Description

There is a sequence of `n+2` elements `a₀`, `a₁`, ..., `aₙ₊₁` (`n <= 3000`, `-1000 <= aᵢ <=1000`). It is known that `aᵢ = (aᵢ₋₁ + aᵢ₊₁)/2 - cᵢ` for each `i=1, 2, ..., n`.

You are given `a₀`, `aₙ₊₁`, `c₁`, ... , `cₙ`. Write a program which calculates `a₁`.

## Input

The first line of an input contains an integer n. The next two lines consist of numbers `a₀` and `aₙ₊₁` each having two digits after decimal point, and the next n lines contain numbers `cᵢ` (also with two digits after decimal point), one number per line.

## Output

The output file should contain `a₁` in the same format as `a₀` and `aₙ₊₁`.

### Sample Input
```
1
50.50
25.50
10.15
```

### Sample Output
```
27.85
```

## Source

Ural State University collegiate programming contest 2000
