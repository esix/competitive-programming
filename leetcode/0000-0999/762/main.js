/**
 * @param {number} L
 * @param {number} R
 * @return {number}
 */
var countPrimeSetBits = function(L, R) {
  const prime = [false, false, true, true, false, true, false, true, false, false, false, true, false, true, false, false, false, true, false, true];
  
  function popcount(v) {
      let result = 0;
      for (; v; result++) v &= (v - 1);
      return result;
  }
  
  let result = 0;
  for (let i = L; i <= R; i++) {
      if (prime[popcount(i)]) result++;
  }
  return result;
};
