/**
 * @param {number} upper
 * @param {number} lower
 * @param {number[]} colsum
 * @return {number[][]}
 */
 var reconstructMatrix = function(upper, lower, colsum) {
  let N = colsum.length;
  let result = [[], []];
  
  for (let i = 0; i < N; i++) {
      if (colsum[i] === 0) {
          result[0][i] = result[1][i] = 0;
      } else if (colsum[i] === 1) {
          if (upper > lower) {
              result[0][i] = 1;
              result[1][i] = 0;
              upper--;
          } else {
              result[0][i] = 0;
              result[1][i] = 1;
              lower--;
          }
      } else if (colsum[i] === 2) {
          result[0][i] = result[1][i] = 1;
          upper--;
          lower--;
      }
  }
  if (upper !== 0 || lower !== 0) return [];
  
  return result;
};
