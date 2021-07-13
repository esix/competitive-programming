# [Find Peak Element](https://leetcode.com/problems/find-peak-element/)

A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.
 

### Example 1:
<pre>
<b>Input:</b> nums = [1,2,3,1]
<b>Output:</b> 2
<b>Explanation:</b> 3 is a peak element and your function should return the index number 2.
</pre>

### Example 2:
<pre>
<b>Input:</b> nums = [1,2,1,3,5,6,4]
<b>Output:</b> 5
<b>Explanation:</b> Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
</pre>

### Constraints:

- `1 <= nums.length <= 1000`
- `-2³¹ <= nums[i] <= 2³¹ - 1`
- `nums[i] != nums[i + 1]` for all valid `i`.
