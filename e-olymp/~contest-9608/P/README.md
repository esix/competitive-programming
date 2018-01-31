# [Arithmetic mean for figure skaters](https://www.e-olymp.com/en/contests/9608/problems/84259)
n judges give grades for figure skaters. Technical worker of competition removes all maximum and all minimum grades and calculates the arithmetic mean of the grades left. This result is considered to be the number of points earned by athlete. Find the number of points earned by each athlete.

## Input
The first line contains two numbers: the number of judges n (0 < n ≤ 10) and the number of sportsmen m (0 < m ≤ 100). Each of the next m lines contains n integers – the grades of all judges for each figure skater.

## Output
Print in one line m numbers with two decimal digits - the number of points earned by each sportsman.

## Input example #1
```
5 4
7 8 9 8 10
6 5 5 4 7 
9 9 10 7 7
7 7 10 9 8
```

## Output example #1
```
8.33 5.33 9.00 8.50
```

**Example description:** Last test case: minimum = 7, maximum = 10, remove all 7 and all 10. Grades left: 9 8. The arithmetic mean of the grades left is (9 + 8 ) / 2 = 8.50