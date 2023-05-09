# Two Bases [⬀](https://codeforces.com/problemset/problem/602/A)

After seeing the "ALL YOUR BASE ARE BELONG TO US" meme for the first time, numbers `X` and `Y` realised that they have different bases, which complicated their relations.

You're given a number `X` represented in base bx and a number Y represented in base by. Compare those two numbers.

## Input

The first line of the input contains two space-separated integers `n` and `bₓx` (`1 ≤ n ≤ 10`, `2 ≤ bₓ ≤ 40`), where n is the number of digits in the `bₓ`-based representation of `X`.

The second line contains n space-separated integers `x₁`, `x₂`, ..., `xₙ` (`0 ≤ xᵢ < bₓ`) — the digits of `X`. They are given in the order from the most significant digit to the least significant one.

The following two lines describe `Y` in the same way: the third line contains two space-separated integers `m` and <code>b<sub>y</sub></code> (`1 ≤ m ≤ 10`, <code>2 ≤ b<sub>y</sub> ≤ 40</code>, `bx ≠ by`), where `m` is the number of digits in the <code>b<sub>y</sub></code>-based representation of `Y`, and the fourth line contains m space-separated integers `y₁`, `y₂`, ..., `yₘ` (<code>0 ≤ y<sub>i</sub> < b<sub>y</sub></code>) — the digits of Y.

There will be no leading zeroes. Both `X` and `Y` will be positive. All digits of both numbers are given in the standard decimal numeral system.

## Output

Output a single character (quotes for clarity):

- '`<`' if `X < Y`
- '`>`' if `X > Y`
- '`=`' if `X = Y`

## Examples

### input
```
6 2
1 0 1 1 1 1
2 10
4 7
```

### output
```
=
```

### input
```
3 3
1 0 2
2 5
2 4
```

### output
```
<
```

### input
```
7 16
15 15 4 0 0 7 10
7 9
4 8 0 3 1 5 0
```

### output
```
>
```

## Note

In the first sample, `X = 101111₂ = 47₁₀ = Y`.

In the second sample, `X = 102₃ = 21₅` and `Y = 24₅ = 112₃`, thus `X < Y`.

In the third sample, `X = FF4007A₁₆` and `Y = 4803150₉`. We may notice that `X` starts with much larger digits and <code>b<sub>x</sub></code> is much larger than <code>b<sub>y</sub></code>, so `X` is clearly larger than `Y`.
