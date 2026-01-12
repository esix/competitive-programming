/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var minSubsequence = function(nums) {
  let SUM = nums.reduce((a, b) => a + b, 0);
  nums.sort((a, b) => b - a);
  let s = 0, i = 0;
  for (i = 0; i < nums.length; i++) {
      s += nums[i];
      if (s > SUM - s) break;
  }
  return nums.slice(0, i + 1);
};
