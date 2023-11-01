# Minimum Distances [⬀](https://www.hackerrank.com/challenges/minimum-distances)

The distance between two array values is the number of indices between them. Given `a`, find the minimum distance between any pair of equal elements in the array. If no such value exists, return `-1`.

## Example
```
a = [3, 2, 1, 2, 3]
```

There are two matching pairs of values: `3` and `2`. The indices of the `3`'s are `i = 0` and `j = 4`, so their distance is `d[i, j] = |i - j| = 4`. The indices of the `2`'s are `i = 1` and `j = 3`, so their distance is `d[i, j] = |j - i| = 2`. The minimum distance is `2`.

## Function Description

Complete the minimumDistances function in the editor below.

minimumDistances has the following parameter(s):

- `int a[n]`: an array of integers

## Returns

- `int`: the minimum distance found or `-1` if there are no matching elements

## Input Format

The first line contains an integer `n`, the size of array `a`.

The second line contains `n` space-separated integers `a[i]`.

## Constraints

- `1 ≤ n ≤ 10³`
- `1 ≤ a[i] ≤ 10⁵`

## Output Format

Print a single integer denoting the minimum `d[i, j]` in `a`. If no such value exists, print `-1`.

## Sample Input
```
STDIN           Function
-----           --------
6               arr[] size n = 6
7 1 3 4 1 7     arr = [7, 1, 3, 4, 1, 7]
```

## Sample Output
```
3
```

## Explanation

There are two pairs to consider:

- `a[1]` and `a[4]` are both `1`, so `d[1, 4] = |1 - 4| = 3`.
- `a[0]` and `a[5]` are both `7`, so `d[0, 5] = |0 - 5| = 5`.

The answer is `min(3, 5) = 3`.
