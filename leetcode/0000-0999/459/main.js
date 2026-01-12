/**
 * @param {string} s
 * @return {boolean}
 */
 var repeatedSubstringPattern = function(s) {
  function *divisors(n) {
      for (let i = 1; i <= (n >> 1); i++) {
          if (n % i === 0) yield i;
      }
  }
  
  for (const d of divisors(s.length)) {
      if (s.slice(0, d).repeat(s.length / d) === s) return true;
  }
  return false;
};
