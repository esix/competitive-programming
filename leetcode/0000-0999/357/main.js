/**
 * @param {number} n
 * @return {number}
 */
var countNumbersWithUniqueDigits = function(n) {
  if (n === 0) return 1;
  const nums = [9, 8, 7, 6, 5, 4, 3, 2, 1];

  return countNumbersWithUniqueDigits(n - 1) + 9 * nums.slice(0, n-1).reduce((a, b) => a * b, 1);
};
