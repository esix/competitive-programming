# LCM Cardinality [⬀](https://www.e-olymp.com/en/problems/1247)

A pair of numbers has a unique LCM but a single number can be the LCM of more than one possible pairs. For example 12 is the LCM of (1, 12), (2, 12), (3,4) etc. For a given positive integer N, the number of different integer pairs with LCM is equal to N can be called the LCM cardinality of that number N. In this problem your job is to find out the LCM cardinality of a number.

## Input

The input file contains at most 101 lines of inputs. Each line contains an integer N (0 < N ≤ 2·109). Input is terminated by a line containing a single zero. This line should not be processed.

## Output

For each line of input except the last one produce one line of output. This line contains two integers N and C. Here N is the input number and C is its cardinality. These two numbers are separated by a single space.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example
```
2
12
24
101101291
0
```

## Output example
```
2 2
12 8
24 11
101101291 5
```