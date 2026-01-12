/**
 * @param {number} n
 * @return {number[]}
 */
 var sumZero = function(n) {
  let result = [];
  for (let i = 1; i <= (n >> 1); i++) {
      result.push(i);
      result.push(-i);
  }
  if (n % 2 === 1) result.push(0);
  return result;
};
