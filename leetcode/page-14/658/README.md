# [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/)

Given a **sorted** integer array `arr`, two integers `k` and `x`, return the `k` closest integers to `x` in the array. The result should also be sorted in ascending order.

An integer `a` is closer to `x` than an integer `b` if:

- `|a - x| < |b - x|`, or
- `|a - x| == |b - x|` and `a < b`
 

### Example 1:
<pre>
<b>Input:</b> arr = [1,2,3,4,5], k = 4, x = 3
<b>Output:</b> [1,2,3,4]
</pre>

### Example 2:
<pre>
<b>Input:</b> arr = [1,2,3,4,5], k = 4, x = -1
<b>Output:</b> [1,2,3,4]
</pre>

### Constraints:

- `1 <= k <= arr.length`
- `1 <= arr.length <= 10⁴`
- `arr` is sorted in **ascending** order.
- `-10⁴ <= arr[i], x <= 10⁴`
