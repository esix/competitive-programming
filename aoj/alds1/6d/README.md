# Minimum Cost Sort [⬀](https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_6_D)

You are given n
 integers `wᵢ` (`i`=0,1,...,`n`−1) to be sorted in ascending order. You can swap
 two integers `wᵢ` and `wⱼ`. Each swap operation has a cost, which is the sum of
 the two integers `wᵢ+wⱼ`. You can perform the operations any number of times.

Write a program which reports the minimal total cost to sort the given integers.

## Input

In the first line, an integer `n` is given. In the second line, `n` integers `wᵢ`
(i=0,1,2,...`n`−1) separated by space characters are given.

## Output
Print the minimal cost in a line.

## Constraints
- 1 ≤ `n` ≤ 1,000
- 0 ≤ `wᵢ`≤ 10⁴
- `wᵢ` are all different

## Sample Input 1
```
5
1 5 3 4 2
```

## Sample Output 1
```
7
```

## Sample Input 2
```
4
4 3 2 1
```

## Sample Output 2
```
10
```
