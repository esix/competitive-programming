/**
 * @param {number} num
 * @return {number[]}
 */
var countBits = function(num) {
  let result = [0];
  while (result.length < num + 1) {
      result = result.concat(result.map(v => v + 1));
  }
  return result.slice(0, num + 1);
};
