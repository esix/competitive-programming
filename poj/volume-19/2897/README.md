# Dramatic Multiplications [⬀](http://poj.org/problem?id=2897)

## Description

Hassan, helping with his younger brother's homework, found out that when you multiply 102564 by 4, its right-most digit moves to the left, and the other digits move one position to the right; i.e. 4 * 102564 = 410256. We call a number that has this property when multiplied by n, an n-dramatic number. For instance, 102564 and 128205 are both 4-dramatic. Given two one-digit numbers n and k, the goal is to find the smallest n-dramatic number that its rightmost digit is k.

## Input

On the first line of the input, there is an integer t, which is the number of cases that follow. Each test case, is on a line by itself, and contains two integers n and k, where 1 <= n <= 9, and 1 <= k <= 9.

## Output

For each test case, output a single integer on a line by itself, which is the smallest n-dramatic number that its rightmost digit is k. If no such number exists, output 0 instead.

### Sample Input
```
2
4 5
2 1
```

### Sample Output
```
128205
0
```

## Source

Tehran 2005