# The nearest points [⬀](https://www.e-olymp.com/en/problems/555)

Anton began to study mathematics at school. His attention was attracted to the new concept of real line. Anton quickly learned how to calculate the distance between two points on this line, to define segments and intervals on it.

Preparing for the tests, Anton encountered the following problem: n points are given on the real line. Find two closest points among them. The distance between two points x and y is defined as |x-y|.

Write a program that helps Anton to solve the problem.

## Input

The first line contains the number of pointsn (2 ≤ n ≤ 10⁵). The second line contains n different integers xᵢ - coordinates of the given points on the real line. The numbers in the row are separated by one space. The value of each coordinate xᵢ does not exceed 10⁹ by absolute value.

## Output

In the first line you must print the minimum distance between two points, given in the input. In the second line print the numbers of points, which corresponds to the distance found. The points are numbered by integers from 1 to n in the order as they are coming in the input. If there are multiple answers, print any of them.

## Input example
```
5
10 3 6 2 5
```

## Output example
```
1
2 4
```
