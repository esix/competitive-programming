# Longest Increasing Subsequence [⬀](https://leetcode.com/problems/longest-increasing-subsequence/)

Given an integer array `nums`, return the length of the longest strictly increasing subsequence.

A **subsequence** is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. For example, `[3,6,2,7]` is a subsequence of the array `[0,3,1,6,2,2,7]`.


### Example 1:
<pre>
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.
</pre>

### Example 2:

<pre>
<b>Input:</b> nums = [0,1,0,3,2,3]
<b>Output:</b> 4
</pre>

### Example 3:
<pre>
<b>Input:</b> nums = [7,7,7,7,7,7,7]
<b>Output:</b> 1
</pre>

### Constraints:

- `1 <= nums.length <= 2500`
- `-10⁴ <= nums[i] <= 10⁴`


**Follow up:** Can you come up with an algorithm that runs in `O(n log(n))` time complexity?
