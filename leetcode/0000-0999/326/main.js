/**
 * @param {number} n
 * @return {boolean}
 */
 var isPowerOfThree = function(n) {
  let v = Math.log(n) / Math.log(3);
  return Math.abs(v - Math.round(v)) < 1e-10;
};
