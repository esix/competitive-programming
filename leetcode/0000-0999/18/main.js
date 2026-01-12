/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
 var fourSum = function(nums, target) {
  let visited = {}, result = {};
  for (let i = 0; i < nums.length - 2; i++) {
      for (let j = i + 1; j < nums.length - 1; j++) {
          for (let k = j + 1; k < nums.length; k++) {
              let v = target - nums[i] - nums[j] - nums[k];
              if (visited[v]) {
                  let item = [nums[i], nums[j], nums[k], v].sort((a, b) => a - b);
                  result[item.toString()] = item;
              }
          }
      }
      visited[nums[i]] = true;
  }
  return Object.values(result);
};
