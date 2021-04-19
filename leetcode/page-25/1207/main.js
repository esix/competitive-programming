/**
 * @param {number[]} arr
 * @return {boolean}
 */
 var uniqueOccurrences = function(arr) {
  let h = {};
  arr.forEach(v => h[v] = (h[v] || 0) + 1);
  return new Set(Object.values(h)).size === Object.values(h).length;
};
