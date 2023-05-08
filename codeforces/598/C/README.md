# Nearest vectors [⬀](https://codeforces.com/problemset/problem/598/C)

You are given the set of vectors on the plane, each of them starting at the origin. Your task is to find a pair of vectors with the minimal non-oriented angle between them.

Non-oriented angle is non-negative value, minimal between clockwise and counterclockwise direction angles. Non-oriented angle is always between `0` and `π`. For example, opposite directions vectors have angle equals to `π`.

## Input

First line of the input contains a single integer `n` (`2 ≤ n ≤ 100 000`) — the number of vectors.

The `i`-th of the following `n` lines contains two integers `xᵢ` and `yᵢ` (`|x|, |y| ≤ 10 000`, `x² + y² > 0`) — the coordinates of the `i`-th vector. Vectors are numbered from `1` to `n` in order of appearing in the input. It is guaranteed that no two vectors in the input share the same direction (but they still can have opposite directions).

## Output

Print two integer numbers `a` and `b` (`a ≠ b`) — a pair of indices of vectors with the minimal non-oriented angle. You can print the numbers in any order. If there are many possible answers, print any.

## Examples

### input
```
4
-1 0
0 -1
1 0
1 1
```

### output
```
3 4
```

### input
```
6
-1 0
0 -1
1 0
1 1
-4 -5
-4 -6
```

### output
```
6 5
```
