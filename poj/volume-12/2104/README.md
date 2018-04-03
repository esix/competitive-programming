# [K-th Number](http://poj.org/problem?id=2104)

## Description

You are working for Macrohard company in data structures department. After failing your previous task about key insertion you were asked to write a new data structure that would be able to return quickly k-th order statistics in the array segment. 
That is, given an array a[1...n] of different integer numbers, your program must answer a series of questions Q(i, j, k) in the form: "What would be the k-th number in a[i...j] segment, if this segment was sorted?" 
For example, consider the array a = (1, 5, 2, 6, 3, 7, 4). Let the question be Q(2, 5, 3). The segment a[2...5] is (5, 2, 6, 3). If we sort this segment, we get (2, 3, 5, 6), the third number is 5, and therefore the answer to the question is 5.

## Input

The first line of the input file contains n --- the size of the array, and m --- the number of questions to answer (1 <= n <= 100 000, 1 <= m <= 5 000). 
The second line contains n different integer numbers not exceeding 109 by their absolute values --- the array for which the answers should be given. 
The following m lines contain question descriptions, each description consists of three numbers: i, j, and k (1 <= i <= j <= n, 1 <= k <= j - i + 1) and represents the question Q(i, j, k).

## Output

For each question output the answer to it --- the k-th number in sorted a[i...j] segment.

## Sample Input
```
7 3
1 5 2 6 3 7 4
2 5 3
4 4 1
1 7 3
```

## Sample Output
```
5
6
3
```

## Hint

This problem has huge input,so please use c-style input(scanf,printf),or you may got time limit exceed.
