# Ramp Number [⬀](https://www.e-olymp.com/en/contests/9290/problems/80894)

A Ramp Number is a number whose digits only rise or stay the same; they never fall.

- 123 is a ramp number.
- 101 is not a ramp number.
- 1111000001111 is not a ramp number.

Given a positive integer n, if it is a ramp number, print the number of ramp numbers less than it. If it is not a ramp number, print -1.

## Input

Starts with a single line giving the number of test cases. Each test case will be a single positive integer on a single line, with up to 80 digits. The result will always fit into a 64-bit long.

## Output

For each test case print -1 if the input is not a ramp number. Print the number of ramp numbers less than the input value if the input value is a ramp number.

## Input example #1
```
5
11
123
101
1111
99999
```

## Output example #1
```
10
65
-1
220
2001
```
