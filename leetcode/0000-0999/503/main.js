/**
 * @param {number[]} nums
 * @return {number[]}
 */
 var nextGreaterElements = function(nums) {
  let s = [];
  let result = nums.map(v => -1);
      
  for (let i = 0; i < 2 * nums.length; i++) {
      let num = nums[i % nums.length];

      while (s.length != 0 && nums[s[s.length-1]] < num) result[s.pop()] = num;
      s.push(i % nums.length)
  }
          
  return result
};
