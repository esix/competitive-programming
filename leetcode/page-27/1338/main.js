/**
 * @param {number[]} arr
 * @return {number}
 */
 var minSetSize = function(arr) {
  let count = {};
  arr.forEach(v => count[v] = (count[v] || 0) + 1)
  let uniques = Object.keys(count);
  uniques.sort((a, b) => count[b] - count[a]);
  let i = 0, sum = 0;
  do {
      if (sum >= arr.length / 2) break;
      sum += count[uniques[i]];
      i++;
  } while (i <= uniques.length);
  return i;
};
