# Range Sum Query 2D - Immutable [⬀](https://leetcode.com/problems/range-sum-query-2d-immutable/)

Given a 2D matrix matrix, find the sum of the elements inside the rectangle defined by its upper left corner (*row*1, *col*1) and lower right corner (*row*2, *col*2).

![Range Sum Query 2D](range_sum_query_2d.png)

The above rectangle (with the red border) is defined by (row1, col1) = **(2, 1)** and (row2, col2) = **(4, 3)**, which contains sum = **8**.

### Example:
```
Given matrix = [
  [3, 0, 1, 4, 2],
  [5, 6, 3, 2, 1],
  [1, 2, 0, 1, 5],
  [4, 1, 0, 1, 7],
  [1, 0, 3, 0, 5]
]

sumRegion(2, 1, 4, 3) -> 8
sumRegion(1, 1, 2, 2) -> 11
sumRegion(1, 2, 2, 4) -> 12
```

### Note:
- You may assume that the matrix does not change.
- There are many calls to sumRegion function.
- You may assume that row1 ≤ row2 and col1 ≤ col2.