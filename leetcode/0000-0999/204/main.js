/**
 * @param {number} n
 * @return {number}
 */
 var countPrimes = function(n) {
  let a = new Array(n).fill(true);
  a[1] = a[0] = false;
  for (let i = 2; i <= n; i++) {
      if (a[i]) {
          for (let j = 2; i * j <= n; j++) {
              a[i * j] = false;
          }
      }
  }
  return a.filter(x => x).length;
};
