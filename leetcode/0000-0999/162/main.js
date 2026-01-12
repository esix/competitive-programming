/**
 * @param {number[]} nums
 * @return {number}
 */
 var findPeakElement = function(nums) {
  const N = nums.length;
  nums[-1] = nums[nums.length] = -Infinity;
  let s = 0; e = N;
  
  while (e - s > 1) {
      let m = (e + s) >> 1;
      if (nums[m-1] < nums[m]) s = m;
      else e = m;
  }
  return (e + s) >> 1;
};
