/**
 * @param {number[]} nums
 * @return {number}
 */
 var triangleNumber = function(nums) {
  nums.sort((a, b) => a - b);
  let result = 0;
  for (let i = 2; i < nums.length; i++) {
      let left = 0, right = i - 1;
      while (left < right) {
          if (nums[left] + nums[right] > nums[i]) {
              result += (right - left);
              right--;
          } else {
              left++;
          }
      }
  }
  return result;
};
