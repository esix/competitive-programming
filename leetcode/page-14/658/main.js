/**
 * @param {number[]} arr
 * @param {number} k
 * @param {number} x
 * @return {number[]}
 */
 var findClosestElements = function(arr, k, x) {
  let isCloser = (a, b) => a !== undefined && (b === undefined || Math.abs(a - x) < Math.abs(b - x) || (Math.abs(a - x) === Math.abs(b - x) && a < b));
  let min = 0;
  for (let i = 1; i < arr.length; i++) {
      if (isCloser(arr[i], arr[min])) min = i;
  }
  
  let max = min;
  let result = [arr[min]];
  while (result.length < k) {
      if (isCloser(arr[min - 1], arr[max + 1])) {
          min--;
          result.unshift(arr[min]);
      } else {
          max++;
          result.push(arr[max]);
      }
  }
  return result;
  
};
