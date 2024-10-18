# Standard Deviation [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_10_C)

You have final scores of an examination for `n` students. Calculate standard deviation of the scores `s₁`, `s₂` ... `sₙ`.

The variance `α²` is defined by
```
α² = (∑ⁿᵢ₌₁(sᵢ - m)²)/n
```

where `m` is an average of `sᵢ`. The standard deviation of the scores is the square root of their variance.

## Input
The input consists of multiple datasets. Each dataset is given in the following format:
```
n
s₁ s₂ ... sₙ
```

The input ends with single zero for `n`.

## Output
For each dataset, print the standard deviation in a line. The output should not contain an absolute error greater than 10⁻⁴.

## Constraints
- `n` ≤ 1000
- 0 ≤ `sᵢ` ≤ 100

## Sample Input
```
5
70 80 100 90 20
3
80 80 80
0
```

## Sample Output
```
27.85677655
0.00000000
```
