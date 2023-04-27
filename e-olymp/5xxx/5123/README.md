# Hailstone HOTPO [⬀](https://www.e-olymp.com/en/problems/5123)

The hailstone sequence is formed in the following way:

- If n is even, divide it by 2 to get n
- if n is odd, multiply it by 3 and add l to get n

It is conjectured that for any positive integer number n, the sequence will always end in the repeating cycle: 4, 2, 1, 4, 2, 1, ... Suffice to say, when n = 1, we will say the sequence has ended.

Write a program to determine the largest value in the sequence for a given n.

## Input

The first line of input contains the number of data sets t (1 ≤ t ≤ 100000) that follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input consisting of two space separated decimal integers. The first integer is the data set number. The second integer is n (l ≤ n ≤ 100000), which is the starting value.

## Output

For each data set there is a single line of output consisting of the data set number, a single space, and the largest value in the sequence starting at and including n.

## Input example #1
```
4
1 1
2 3
3 9999
4 100000
```

## Output example #1
```
1 1
2 16
3 101248
4 100000
```
