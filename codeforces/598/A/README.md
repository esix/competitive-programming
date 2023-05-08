# Tricky Sum [⬀](https://codeforces.com/problemset/problem/598/A)

In this problem you are to calculate the sum of all integers from `1` to `n`, but you should take all powers of two with minus in the sum.

For example, for `n = 4` the sum is equal to  `-1 - 2 + 3 - 4 = -4`, because `1`, `2` and `4` are `2⁰`, `2¹` and `2²` respectively.

Calculate the answer for `t` values of `n`.

## Input

The first line of the input contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of values of n to be processed.

Each of next `t` lines contains a single integer `n` (`1 ≤ n ≤ 10⁹`).

## Output

Print the requested sum for each of `t` integers `n` given in the input.

## Examples

### input
```
2
4
1000000000
```

### output
```
-4
499999998352516354
```

### Note
The answer for the first sample is explained in the statement.