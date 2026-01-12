/**
 * @param {number[]} A
 * @return {number}
 */
 var repeatedNTimes = function(A) {
  let h = {};
  for (let a of A) {
      if (a in h) return a;
      h[a] = true;
  }
  return 0;
};
