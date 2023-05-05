# A Problem about Polyline [⬀](https://codeforces.com/problemset/problem/578/A)

There is a polyline going through points `(0, 0)` – `(x, x)` – `(2x, 0)` – `(3x, x)` – `(4x, 0)` – ... - `(2kx, 0)` – `(2kx + x, x)` – ...

We know that the polyline passes through the point `(a, b)`. Find minimum positive value `x` such that it is true or determine that there is no such `x`.

## Input

Only one line containing two positive integers `a` and `b` (`1 ≤ a, b ≤ 10⁹`).

## Output

Output the only line containing the answer. Your answer will be considered correct if its relative or absolute error doesn't exceed `10⁻⁹`. If there is no such `x` then output `-1` as the answer.

## Examples

### input
```
3 1
```

### output
```
1.000000000000
```

### input
```
1 3
```

### output
```
-1
```

### input
```
4 1
```

### output
```
1.250000000000
```

## Note

You can see following graphs for sample 1 and sample 3.

![](579-c-1.png)

![](579-c-2.png)