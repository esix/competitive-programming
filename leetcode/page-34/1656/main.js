/**
 * @param {number} n
 */
 var OrderedStream = function(n) {
  this.ptr = 0;
  this.arr = new Array(n);
};

/** 
* @param {number} idKey 
* @param {string} value
* @return {string[]}
*/
OrderedStream.prototype.insert = function(idKey, value) {
  this.arr[idKey - 1] = value;
  let result = [];
  if (this.arr[this.ptr] !== undefined) {
      for (; this.arr[this.ptr] !== undefined; this.ptr++) result.push(this.arr[this.ptr]);
  }
  return result;
};

/** 
* Your OrderedStream object will be instantiated and called as such:
* var obj = new OrderedStream(n)
* var param_1 = obj.insert(idKey,value)
*/
