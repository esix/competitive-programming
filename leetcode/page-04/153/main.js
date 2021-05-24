/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
  let i = 0, j = nums.length - 1;
  while (j - i > 1) {
      let mid = (i + j) >> 1;
      if (nums[i] < nums[mid] && nums[mid] > nums[j]) i = mid;
      else j = mid;
  }
  let mid = nums[i] < nums[j] ? i : j;
  return nums[mid];
};
