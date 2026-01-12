/**
 * @param {number[]} arr
 * @return {number[]}
 */
 var sortByBits = function(arr) {
  function popcount(v) {
      let result = 0;
      for (; v; result++) v &= (v - 1);
      return result;
  }
  arr.sort((a, b) => (popcount(a) - popcount(b)) || (a - b));
  return arr;
};
