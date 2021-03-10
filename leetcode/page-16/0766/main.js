/**
 * @param {number[][]} matrix
 * @return {boolean}
 */
var isToeplitzMatrix = function(matrix) {
  let h = matrix.length;
  const has = (i, j) => matrix[i] !== undefined && matrix[i][j] !== undefined;
  
  let check = (i, j) => {
      let v = matrix[i][j];
      for (let k = 1; has(i + k, j + k); k++)
          if (matrix[i+k][j+k] !== v)
              throw new Error('failed')
  }
  
  try {
      for (let i = 1; has(i, 0); i++) check(i, 0);
      for (let i = 0; has(0, i); i++) check(0, i);
      return true;
  } catch (err) {
      return false;
  }
};
