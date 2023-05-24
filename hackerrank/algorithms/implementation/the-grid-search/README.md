# The Grid Search [⬀](https://www.hackerrank.com/challenges/the-grid-search)

Given an array of strings of digits, try to find the occurrence of a given pattern of digits. In the grid and pattern arrays, each string represents a row in the grid. For example, consider the following grid:

<pre>
1234567890
09<b>876543</b>21
11<b>111111</b>11
11<b>111111</b>11
2222222222
</pre>

The pattern array is:

<pre>
876543
111111
111111
</pre>

The pattern begins at the second row and the third column of the grid and continues in the following two rows. The pattern is said to be present in the grid. The return value should be `YES` or `NO`, depending on whether the pattern is found. In this case, return `YES`.

## Function Description

Complete the `gridSearch` function in the editor below. It should return YES if the pattern exists in the grid, or NO otherwise.

`gridSearch` has the following parameter(s):
- `string G[R]`: the grid to search
- `string P[r]`: the pattern to search for