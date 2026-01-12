/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
    const n = nums.length; 
    nums.sort((a, b) => a - b);
    const abs = Math.abs, max = Math.max, min = Math.min;
    
    let getClosest = (v1, v2, target) => (target - v1 >= v2 - target) ? v2 : v1;    
    
    let findClosest = (target, i) => {
        // let i = 0;
        if (target <= nums[i]) return nums[i]; 
        if (target >= nums[n - 1]) return nums[n - 1]; 
        let j = n, mid = 0; 
        while (i < j) { 
            mid = (i + j) >> 1; 
            if (nums[mid] === target) return nums[mid]; 
            if (target < nums[mid]) { 
                if (mid > 0 && target > nums[mid - 1]) return getClosest(nums[mid - 1], nums[mid], target); 
                j = mid;               
            } else { 
                if (mid < n - 1 && target < nums[mid + 1]) return getClosest(nums[mid], nums[mid + 1], target);                             i = mid + 1;
            } 
        } 
        return nums[mid];
    };
    
    let bestV = Infinity, bestDelta = Infinity;
    
    for (let i = 0; i < n - 2; i++) {
        for (let j = i + 1; j < n - 1; j++) {
            let v3 = findClosest(target - nums[i] - nums[j], j + 1);
            let v = nums[i] + nums[j] + v3;
            let delta = abs(target - v);
            if (delta < bestDelta) {
                bestDelta = delta;
                bestV = v;
            }
        }
    }
    return bestV;
};