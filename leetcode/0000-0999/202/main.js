/**
 * @param {number} n
 * @return {boolean}
 */

var isHappy = function(n) {
  let visited = {};
  let rec = (n) => {
      if (visited[n]) return false;
      if (n === 1) return true;
      visited[n] = true;
      return rec(n.toString().split('').map(d => d*d).reduce((a,b) => a + b));
  }
  
  return rec(n);
};
