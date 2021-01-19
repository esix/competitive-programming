/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var rangeBitwiseAnd = function(m, n) {
  let result = 0, zero = false;
  for (let mask = 1 << 30; mask; mask >>= 1) {
      let mm = +!!(mask & m);
      let nn = +!!(mask & n);
      if (zero) {
          //
      } else if (mm === 0 && nn === 0) {
          //
      } else if (mm === 0 && nn === 1) {
          zero = true;
      } else if (mm === 1 && nn === 0) {
          zero = true;
      } else {  // 1 1
          result |= mask;
      }
  }
  return result;
};