# Approximating a Constant Range [⬀](https://codeforces.com/problemset/problem/602/B)

When Xellos was doing a practice course in university, he once had to measure the intensity of an effect that slowly approached equilibrium. A good way to determine the equilibrium intensity would be choosing a sufficiently large number of consecutive data points that seems as constant as possible and taking their average. Of course, with the usual sizes of data, it's nothing challenging — but why not make a similar programming contest problem while we're at it?

You're given a sequence of `n` data points `a₁`, ..., `aₙ`. There aren't any big jumps between consecutive data points — for each `1 ≤ i < n`, it's guaranteed that `|aᵢ₊₁ - aᵢ| ≤ 1`.

A range `[l, r]` of data points is said to be *almost constant* if the difference between the largest and the smallest value in that range is at most `1`. Formally, let `M` be the maximum and `m` the minimum value of `aᵢ` for `l ≤ i ≤ r`; the range `[l, r]` is almost constant if `M - m ≤ 1`.

Find the length of the longest almost constant range.

## Input

The first line of the input contains a single integer `n` (`2 ≤ n ≤ 100 000`) — the number of data points.

The second line contains `n` integers `a₁`, `a₂`, ..., `aₙ` (`1 ≤ aᵢ ≤ 100 000`).

## Output

Print a single number — the maximum length of an almost constant range of the given sequence.

## Examples

### input
```
5
1 2 3 3 2
```

### output
```
4
```

### input
```
11
5 4 5 5 6 7 8 8 8 7 6
```

output
```
5
```

## Note

In the first sample, the longest almost constant range is `[2, 5]`; its length (the number of data points in it) is `4`.

In the second sample, there are three almost constant ranges of length `4`: `[1, 4]`, `[6, 9]` and `[7, 10]`; the only almost constant range of the maximum length `5` is `[6, 10]`.

