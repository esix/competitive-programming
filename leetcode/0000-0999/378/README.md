# Kth Smallest Element in a Sorted Matrix [⬀](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/)


Given an `n x n` `matrix` where each of the rows and columns are sorted in ascending order, return *the `kᵗʰ` smallest element in the matrix*.

Note that it is the `kᵗʰ` smallest element **in the sorted order**, not the `kᵗʰ` **distinct** element.

### Example 1:
<pre>
<b>Input:</b> matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
<b>Output:</b> 13
Explanation: The elements in the matrix are [1,5,9,10,11,12,13,<u><b>13</b></u>,15], and the 8ᵗʰ smallest number is 13
</pre>

### Example 2:
<pre>
<b>Input:</b> matrix = [[-5]], k = 1
<b>Output:</b> -5
</pre>

###vConstraints:

- `n == matrix.length`
- `n == matrix[i].length`
- `1 <= n <= 300`
- `-10⁹ <= matrix[i][j] <= 10⁹`
- All the rows and columns of `matrix` are **guaranteed** to be sorted in **non-decreasing order**.
- `1 <= k <= n²`
