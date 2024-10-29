# Greatest Common Divisor [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_B)

Write a program which finds the greatest common divisor of two natural numbers a and b

## Input
- `a` and `b` are given in a line sparated by a single space.

## Output
Output the greatest common divisor of `a` and `b`.

## Constrants
- 1 ≤ `a`, `b` ≤ 10⁹

## Hint
You can use the following observation:

For integers `x` and `y`, if `x` ≥ `y`, then `gcd(x, y) = gcd(y, x%y)`

## Sample Input 1
```
54 20
```

## Sample Output 1
```
2
```

## Sample Input 2
```
147 105
```

## Sample Output 2
```
21
```

