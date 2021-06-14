/**
 * @param {number[]} arr
 * @return {number[]}
 */
 var prevPermOpt1 = function(arr) {
  if (arr.length === 1) return arr;

  let j = arr.length-2;
  for ( ; j >= 0 && arr[j] <= arr[j+1]; j--);
  if (j === -1) return arr;

  let i = arr.length - 1;
  for ( ; i > 0 && arr[i] >= arr[j]; i--);
  for ( ; i > 0 && arr[i] == arr[i-1]; i--);
  [arr[j], arr[i]] = [arr[i], arr[j]] 
  return arr;
};
