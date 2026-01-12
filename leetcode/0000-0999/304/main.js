/**
 * @param {number[][]} matrix
 */
var NumMatrix = function(matrix) {
  let sums = matrix.map(row => []);
  sums[-1] = [];
  for (let i = -1; i < matrix.length; i++) sums[i][-1] = 0;
  if (matrix[0]) for (let j = -1; j < matrix[0].length; j++) sums[-1][j] = 0;

  for (let i = 0; i < matrix.length; i++)  {
      for (let j = 0; j < matrix[i].length; j++) {
          sums[i][j] = sums[i - 1][j] + sums[i][j-1] - sums[i - 1][j - 1] + matrix[i][j];
      }
  }
  
  this.sums = sums;
};

/** 
* @param {number} row1 
* @param {number} col1 
* @param {number} row2 
* @param {number} col2
* @return {number}
*/
NumMatrix.prototype.sumRegion = function(row1, col1, row2, col2) {
  return this.sums[row2][col2] - this.sums[row2][col1-1] - this.sums[row1 - 1][col2] + this.sums[row1 - 1][col1 - 1];
};

/** 
* Your NumMatrix object will be instantiated and called as such:
* var obj = new NumMatrix(matrix)
* var param_1 = obj.sumRegion(row1,col1,row2,col2)
*/