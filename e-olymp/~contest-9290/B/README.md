# Majority [⬀](https://www.e-olymp.com/en/contests/9290/problems/80892)

The votes are in! Mathematicians world-wide have been polled, and each has chosen their favorite number between 1 and 1000. Your goal is to tally the votes and determine what the most popular number is.

If there is a tie for the greatest number of votes, choose the smallest number with that many votes.

## Input

Starts with a single line containing the number of test cases, between 1 and 100 inclusive. For each test case, there will be a single line giving the number of votes V (1 ≤ V ≤ 1000). Following that line will be V lines, each with a single integer vote between 1 and 1000.

## Output

For each test case print in a separate line the most popular number. In the case of a tie print the smallest number with that number of votes.

_Time limit 1 second_

_Memory limit 128 MiB_

## Input example #1
```
3
3
42
42
19
4
7
99
99
7
5
11
12
13
14
15
```

## Output example #1
```
42
7
11
```
