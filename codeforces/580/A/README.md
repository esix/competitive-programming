# Kefa and First Steps [⬀](https://codeforces.com/problemset/problem/580/A)

Kefa decided to make some money doing business on the Internet for exactly `n` days. He knows that on the `i`-th day (`1 ≤ i ≤ n`) he makes `aᵢ` money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence `aᵢ`. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

## Input

The first line contains integer `n` (`1 ≤ n ≤ 10⁵`).

The second line contains n integers `a₁`,  `a₂`,  ...,  `aₙ` (`1 ≤ aᵢ ≤ 10⁹`).

## Output

Print a single integer — the length of the maximum non-decreasing subsegment of sequence `a`.

## Examples

### input
```
6
2 2 1 3 4 1
```

### output
```
3
```

### input
```
3
2 2 9
```

### output
```
3
```

## Note

In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.

