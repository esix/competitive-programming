# [Minimum Sum LCM](https://www.e-olymp.com/en/problems/1246)

LCM (Least Common Multiple) of a set of integers is defined as the minimum number, which is a multiple of all integers in that set. It is interesting to note that any positive integer can be expressed as the LCM of a set of positive integers. For example 12 can be expressed as the LCM of 1, 12 or 12, 12 or 3, 4 or 4, 6 or 1, 2, 3, 4 etc.

In this problem, you will be given a positive integer n. You have to find a set of at least two positive integers whose LCM is n. As there exists an infinite number of such sequences, you have to pick the sequence whose summation of elements is minimum. We will be quite happy if you just print the summation of the elements of this set. So, for n = 12, you should print 4 + 3 = 7 as LCM of 4 and 3 is 12 and 7 is the minimum possible summation.

## Input

Input contains at most 100 test cases. Each test case consists of a positive integer n (1 ≤ n≤2³¹ – 1). Input is terminated by a case where n = 0. This case should not be processed. There can be at most 100 test cases.

## Output

Output of each test case should consist of a line starting with "Case #: " where # is the test case number. It should be followed by the summation as specified in the problem statement. Look at the output for sample input for details.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example
```
12
10
5
0
```

## Output example
```
Case 1: 7
Case 2: 7
Case 3: 6
```
