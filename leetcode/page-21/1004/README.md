# Max Consecutive Ones III [⬀](https://leetcode.com/problems/max-consecutive-ones-iii/)

Given a binary array `nums` and an integer `k`, return *the maximum number of consecutive 1's in the array if you can flip at most* `k` `0`'s.

### Example 1:
<pre>
<b>Input:</b> nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
<b>Output:</b> 6
<b>Explanation:</b> [1,1,1,0,0,<u><b>1</b></u>,<u>1</u>,<u>1</u>,<u>1</u>,<u>1</u>,<u><b>1</b></u>]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
</pre>

### Example 2:
<pre>
<b>Input:</b> nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
<b>Output:</b> 10
<b>Explanation:</b> [0,0,<u>1</u>,<u>1</u>,<u><b>1</b></u>,<u><b>1</b></u>,<u>1</u>,<u>1</u>,<u>1</u>,<u><b>1</b></u>,<u>1</u>,<u>1</u>,0,0,0,1,1,1,1]
Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
</pre>

### Constraints:

- `1 <= nums.length <= 10⁵`
- `nums[i]` is either `0` or `1`.
- `0 <= k <= nums.length`


