/**
 * @param {number[][]} mat
 * @param {number} r
 * @param {number} c
 * @return {number[][]}
 */
 var matrixReshape = function(mat, r, c) {
  let i = 0, j = 0, result = new Array(r).fill(0).map(_ => []);
  mat.forEach(vec => vec.forEach(v => {
      if (i < r) result[i][j] = v;
      j++;
      if (j === c) {
          j = 0;
          i++;
      }
  }));
  return j === 0 && i === r ? result : mat;
};
