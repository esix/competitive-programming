/**
 * @param {number[]} target
 * @param {number[]} arr
 * @return {boolean}
 */
 var canBeEqual = function(target, arr) {
  let reverse = (arr, i, j) => {
      for (let k1 = i, k2 = j; k1 < k2; k1++, k2--) [arr[k1], arr[k2]] = [arr[k2], arr[k1]];
  }
  for (let i = 0; i < arr.length; i++) {
      if (arr[i] === target[i]) continue;
      let j = target.indexOf(arr[i], i + 1);
      if (j === -1) return false;
      reverse(target, i, j);
  }
  return true;
};
