/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
  let m = null, M = null, result = 0;
  const mul = (a, b) => a === null ? b : a * b;
  for (let n of nums) {
      if (n > 0) {
          [m, M] = [Math.min(mul(m, n), 0) || null, mul(M, n)];
      } else if (n === 0) {
          [m, M] = [null, null];
      } else {
          [m, M] = [mul(M, n), Math.max(mul(m, n), 0) || null];
      }
      result = Math.max(result, M) || null;
  }
  if (result === null) result = Math.max.apply(Math, nums);
  return result;
};