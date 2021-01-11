/**
 * @param {number} n
 * @return {number}
 */
var totalNQueens = function(n) {
  let result = 0;
  let board = [];
  let dots = [''];
  for (let i = 1; i <= 9; i++) dots[i] = ''.padStart(i, '.');
      
  function solve(y, isFree) {
      if (y === n) {
          result++;
          return;
      }
      for (let x = 0; x < n; x++) {
          if (isFree(y, x)) {
              board[y] = dots[x] + 'Q' + dots[n - x - 1];
              solve(y + 1, (yy, xx) => {
                  if (xx === x) return false;
                  if (xx - x === yy - y) return false;
                  if (xx - x === y - yy) return false;
                  return isFree(yy, xx);
              });
          }
      }        
  }
  solve(0, () => true);
  return result;
};