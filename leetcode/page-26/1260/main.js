/**
 * @param {number[][]} grid
 * @param {number} k
 * @return {number[][]}
 */
 var shiftGrid = function(grid, k) {
  const h = grid.length, w = grid[0].length;
  return grid.map((row, i) => row.map((v, j) => {
      let n = ((i * w + j) - k + k * w * h) % (w * h);
      return grid[Math.floor(n / w)][n % w];
  }));
};
