# Maximum Profit [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_D)

You can obtain profits from foreign exchange margin transactions. For example, if you buy 1000 dollar at a rate of 100 yen per dollar, and sell them at a rate of 108 yen per dollar, you can obtain (108 - 100) × 1000 = 8000 yen.

Write a program which reads values of a currency `Rₜ` at a certain time `t` (`t`=`0`,`1`,`2`,...`n−1`), and reports the maximum value of `Rⱼ−Rᵢ` where `j>i`.

## Input
The first line contains an integer `n`. In the following `n` lines, `Rₜ` (`t`=`0`,`1`,`2`,...`n−1`) are given in order.

## Output
Print the maximum value in a line.

## Constraints

- 2 ≤ `n` ≤ 200,000
- 1 ≤ `Rₜ` ≤ 10⁹

## Sample Input 1
```
6
5
3
1
3
4
3
```

## Sample Output 1
```
3
```

## Sample Input 2
```
3
4
3
2
```

## Sample Output 2
```
-1
```
