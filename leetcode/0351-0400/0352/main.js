/**
 * Initialize your data structure here.
 */
var SummaryRanges = function() {
  this.rs = [];
};

/** 
* @param {number} val
* @return {void}
*/
SummaryRanges.prototype.addNum = function(val) {
  if (!this.rs.length) { this.rs.push([val, val]); return };
  
  let rs = this.rs, min = 0, max = rs.length;
  while (max - min > 1) {
      let mid = (min + max) >> 1;
      if (val <= rs[mid][1]) max = mid;
      else min = mid;
  }
  
  if (val < rs[min][0]) { min--; max--;}
  else if (val <= rs[min][1]) { return; }
  else if (rs[max] && val < rs[max][0]) {}
  else if (rs[max] && val <= rs[max][1]) { return; }
  else {}
  
  if (rs[min] && rs[max] && rs[min][1] + 1 === val && rs[max][0] - 1 === val) {
      rs[min][1] = rs[max][1];
      rs.splice(max, 1);
  } else if (rs[min] && rs[min][1] + 1 === val){
      rs[min][1] ++;
  } else if (rs[max] && rs[max][0] - 1 === val) {
      rs[max][0] --;
  } else {
      rs.splice(max, 0, [val, val]);
  }
  
};

/**
* @return {number[][]}
*/
SummaryRanges.prototype.getIntervals = function() {
  return this.rs;
};

/** 
* Your SummaryRanges object will be instantiated and called as such:
* var obj = new SummaryRanges()
* obj.addNum(val)
* var param_2 = obj.getIntervals()
*/
