# f91 [⬀](https://www.e-olymp.com/en/contests/9646/problems/84666)
McCarthy is a famous theorician of computer science. In his work, he defined a recursive function, called f91, that takes as input a positive integer n and returns a positive integer defined as follows:

If n ≤ 100, then f91(n) = f91(f91(n + 11));

If n ≥ 101, then f91(n) = n - 10.

## Input

A positive integer n not greater than 1000000.

## Output

The value of f91(n).

## Input example

### Sample 1
```
500
```

### Sample 2
```
91
```

## Output example
### Sample 1
```
490
```

### Sample 2
```
91
```