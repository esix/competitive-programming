/**
 * @param {number} n
 * @return {number[]}
 */
 var grayCode = function(n) {
  let rec = (n, d = 0) => (n == 0) ? [''] : rec(n-1, 0).map(x => String(d) + x).concat(rec(n-1, 1).map(x => String(1 - d) + x));
  return rec(n).map(v => parseInt(v, 2))
};
