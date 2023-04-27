# Theater revenue [⬀](https://www.e-olymp.com/en/problems/4749)
The theater has n rows with m seats. Two matrices are given. The first one contains the ticket prices for each seat. The second matrix tells which tickets are sold and which are not (1 means the ticket is sold for a corresponding seat, 0 - is not sold).

Determine the total revenue from the performance.

## Input
The first line contains n and m (n, m ≤ 500). Then the matrix with ticket prices is given (n lines with m numbers, each number ranges from 0 to 10000). Then given the matrix of sold tickets - n lines with m numbers.

## Output
Print the total revenue from ticket sales.

## Input example #1
```
3 3
1 2 3
4 5 6
7 8 9

1 0 1
0 1 0
1 0 1
```

## Output example #1
```
25
```
