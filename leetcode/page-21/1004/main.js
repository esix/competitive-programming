/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
 var longestOnes = function(nums, k) {
  let s = 0, e = 0;
  for (; e < nums.length; e++) {
      if (nums[e] === 0) {
          if (k === 0) break;
          k--;
      }
  }

  let result = e - s;
  while (true) {
      if (e === nums.length) {
          result = Math.max(e - s, result);
          break;
      }

      // nums[e] === 0
      e++;
      while (nums[e] === 1 && e < nums.length) e++;
      
      while (nums[s] === 1) s++;
      // nums[s] === 0
      s++;
      
      result = Math.max(e - s, result);
  }
  return result;
};
