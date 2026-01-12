/**
 * @param {number[]} nums
 * @return {number}
 */
 var removeDuplicates = function(nums) {
  let d = 0;
  for (let i = 0; i < nums.length; i++) {
      let v = nums[i];
      nums[i - d] = v;
      if (nums[i + 1] === v) {
          d++;
      }
  }
  nums.length = nums.length - d;
};
