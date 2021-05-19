/**
 * @param {number[]} nums
 */
var NumArray = function(nums) {
  this._sums = [];
  let s = 0;
  for (let i = 0; i < nums.length; i++) {
      s += nums[i];
      this._sums[i] = s;
  }
};

/** 
* @param {number} i 
* @param {number} j
* @return {number}
*/
NumArray.prototype.sumRange = function(i, j) {
  return this._sums[j] - (this._sums[i - 1] || 0);
};

/** 
* Your NumArray object will be instantiated and called as such:
* var obj = new NumArray(nums)
* var param_1 = obj.sumRange(i,j)
*/