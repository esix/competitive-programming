/**
 * @param {number[]} nums
 * @return {number}
 */
 var lengthOfLIS = function(nums) {
  let L = nums.map(_ => 1);
  for (let i = 1; i < nums.length; i++) {
      for (let j = 0; j < i; j++) {
          if (nums[j] < nums[i]) {
              L[i] = Math.max(L[i], L[j] + 1);
          }
      }
  }
  return Math.max.apply(Math, L);
};
