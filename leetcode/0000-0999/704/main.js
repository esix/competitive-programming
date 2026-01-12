/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
 var search = function(nums, target) {
  let i = 0, j = nums.length - 1;
  while (i <= j) {
      let m = (i + j) >> 1;
      if (nums[m] < target) {
          i = m + 1;
      } else if (nums[m] > target) {
          j = m - 1;
      } else if (nums[m] == target) {
          return m;
      }
  }
  return -1;
};
