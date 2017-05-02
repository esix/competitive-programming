/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for (let i = 0; i < nums.length - 1; i++) {
        const k = nums.indexOf(target - nums[i], i + 1);
        if (k !== -1) {
            return [i, k];
        }
    }
    throw new Error('No solution')
};
