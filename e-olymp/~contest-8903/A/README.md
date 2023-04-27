# Mint [⬀](https://www.e-olymp.com/en/contests/8903/problems/76949)


The Royal Canadian Mint has commissioned a new series of designer coffee tables, with legs that are constructed from stacks of coins. Each table has four legs, each of which uses a different type of coin. For example, one leg might be a stack of quarters, another nickels, another loonies, and another twonies. Each leg must be exactly the same length.

Many coins are available for these tables, including foreign and special commemorative coins. Given an inventory of available coins and a desired table height, compute the lengths nearest to the desired height for which four legs of equal length may be constructed using a different coin for each leg.

## Input

Input consists of several test cases. Each case begins with an integers: 4 ≤ n ≤ 100 giving the number of types of coins available, and 1 ≤ t ≤ 10 giving the number of tables to be designed. n lines follow; each gives the thickness of a coin in hundredths of millimetres. t lines follow; each gives the height of a table to be designed (also in hundredths of millimetres). A line containing 0 0 follows the last test case.

## Output

For each table, output a line with two integers: the greatest leg length not exceeding the desired length, and the smallest leg length not less than the desired length.

*Time limit 6 seconds*

*Memory limit 64 MiB*


## Input example

```
4 2
50
100
200
400
1000
2000
0 0
```

## Output example

```
800 1200
2000 2000
```