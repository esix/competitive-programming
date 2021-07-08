/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
 var findLength = function(x, y) {
  let L = y.map(_ => x.map(_ => 0));
  for (let i = 0; i < y.length; i++) {
      for (let j = 0; j <= x.length; j++) {
          if (y[i] === x[j]) {
              L[i][j] = (i == 0 || j == 0) ? 1 : L[i - 1][j - 1] + 1;
          }
      }
  }
  return Math.max.apply(Math, L.map(v => Math.max.apply(Math, v)));
};
