/**
 * @param {number[]} nums
 */
 var Solution = function(nums) {
  this.nums = nums;
  this.copy = [...nums];
};

/**
* Resets the array to its original configuration and return it.
* @return {number[]}
*/
Solution.prototype.reset = function() {
  this.nums = [...this.copy];
  return this.nums;
};

/**
* Returns a random shuffling of the array.
* @return {number[]}
*/
Solution.prototype.shuffle = function() {
  const n = this.nums.length;
  for (let i = 0; i < n; i++) {
       let r = Math.floor(Math.random() * (i + 1));
       [this.nums[i], this.nums[r]] = [this.nums[r], this.nums[i]];
  }
  return this.nums
};

/** 
* Your Solution object will be instantiated and called as such:
* var obj = new Solution(nums)
* var param_1 = obj.reset()
* var param_2 = obj.shuffle()
*/
