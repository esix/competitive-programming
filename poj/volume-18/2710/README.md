# [Consecutive Digits](http://poj.org/problem?id=2710)

## Description

As a recruiting ploy, Google once posted billboards in Harvard Square and in the Silicon Valley area just stating “{first 10-digit prime found in consecutive digits of e}.com”. In other words, find that 10-digit sequence and then connect to the web site — and find out that Google is trying to hire people who can solve a particular kind of problem.

Not to be outdone, Gaggle (a loosy-goosy fuzzy logic search firm), has devised its own recruiting problem. Consider the base 7 expansion of a rational number. For example, the first few digits of the base 7 expansion of `1/5₁₀ = 0.12541...7`, `33/4₁₀ = 11.15151...7`, and `6/49₁₀ = 0.06000...7`, From this expansion, find the digits in a particular range of positions to the right of the "decimal" point.

## Input

The input file begins with a line containing a single integer specifying the number of problem sets in the file. Each problem set is specified by four base 10 numbers on a single line, `n` `d` `b` `e`, where `n` and `d` are the numerator and denominator of the rational number and `0 <= n <= 5,000` and `1 <= d <= 5,000`. `b` and `e` are the beginning and ending positions for the desired range of digits, with `0 <= b,e <= 250` and `0 <= (e-b) <= 20`. Note that `0` is the position immediately to the right of the decimal point.

## Output

Each problem set will be numbered (beginning at one) and will generate a single line:
```
Problem set k: n / d, base 7 digits b through e: result
```
where `k` is replaced by the problem set number, result is your computed result, and the other values are the corresponding input values.

### Sample Input
```
4
1 5 0 0
6 49 1 3
33 4 2 7
511 977 122 126
```

### Sample Output
```
Problem set 1: 1 / 5, base 7 digits 0 through 0: 1
Problem set 2: 6 / 49, base 7 digits 1 through 3: 600
Problem set 3: 33 / 4, base 7 digits 2 through 7: 151515
Problem set 4: 511 / 977, base 7 digits 122 through 126: 12425
```

## Source

Mid-Central USA 2005
