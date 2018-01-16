# [Just Add It](https://www.e-olymp.com/en/contests/9520/problems/83415)
For two given integers n and k find

(Zn + Zn-1 - 2Zn-2) mod 10000007,

where Zn = Sn + Pn and Sn = 1ⁱ + 2ⁱ + 3ⁱ + ... + nⁱ and Pn = 1¹ + 2² + 3³ + ... + nⁿ.

## Input
There are several test cases. In each case two space separated positive integers n and k (1 < n < 2*10⁸, 0 < k < 10⁶) are given. The last test case contains two zeros and will not be processed.

## Output
For each test case print the found value in a separate line.

## Input example #1
```
10 3
9 31
83 17
5 2
0 0
```

## Output example #1
```
4835897
2118762
2285275
3694
```
