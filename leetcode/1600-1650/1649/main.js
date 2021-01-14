/**
 * @param {number[]} instructions
 * @return {number}
 */
var createSortedArray = function(v) {
  let b = [];
  const sum = (i) => {
      let result = 0;
      for (let j = i; j > 0; j -= (j & -j)) result += b[j] ?? 0;
      return result;
  }
  const update = (i) => {
      for (let j = i; j < 100001; j += (j & -j)) b[j] = (b[j] ?? 0) + 1;
  }
  const n = v.length;
  let result = 0;
  for (let i = 0; i < n; i++) {
      result += Math.min(sum(v[i] - 1), i - sum(v[i]));
      result %= 1000000000 + 7;
      update(v[i]);
  }
  return result;
};
