/**
 * @param {number} k
 * @param {number[]} nums
 */
 var KthLargest = function(k, nums) {
  this.k = k;
  this.nums = nums.slice(0).sort((a, b) => b - a);
};

/** 
* @param {number} val
* @return {number}
*/
KthLargest.prototype.add = function(val) {
  let nums = this.nums;
  let i = nums.findIndex(v => v <= val);
  i = (i === -1) ? nums.length : i;
  this.nums = this.nums.slice(0, i).concat(val, nums.slice(i)).slice(0, this.k);
  return this.nums[this.k - 1]
};

/** 
* Your KthLargest object will be instantiated and called as such:
* var obj = new KthLargest(k, nums)
* var param_1 = obj.add(val)
*/
