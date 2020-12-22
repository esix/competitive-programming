/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
  let m = 1, M = 1, result = 0;
  for (let i = 0; i < nums.length; i++) {
      if (nums[i] > 0) {
          [m, M] = [Math.min(m * nums[i], 1), M * nums[i]];
      } else if (nums[i] == 0) {
          [m, M] = [1, 1];
      } else {
          [m, M] = [M * nums[i], Math.max(m * nums[i], 1)];
      }
      result = Math.max(result, M);
  }
  if (result === 1) result = Math.max.apply(Math, nums);
  return result;
};