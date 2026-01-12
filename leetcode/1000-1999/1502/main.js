/**
 * @param {number[]} arr
 * @return {boolean}
 */
 var canMakeArithmeticProgression = function(arr) {
  arr.sort((a, b) => a - b);
  if (arr.length <= 2) return true;
  for (let i = 2; i < arr.length; i++) {
      if (arr[i] - arr[i - 1] !== arr[i - 1] - arr[i - 2]) {
          return false;
      }
  }
  return true;
};
