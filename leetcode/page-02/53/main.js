/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
  if (nums.length === 1) return nums[0];
    
  let sum = 0, maxSum = -Infinity;
  for (let n of nums){
      sum = sum < 0 ? n : sum + n;
      maxSum = Math.max(sum, maxSum);
    }
    
    return maxSum > sum ? maxSum : sum;
};
