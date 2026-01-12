/**
 * @param {number[]} arr
 * @return {number}
 */
var peakIndexInMountainArray = function(arr) {
  let rec = (i, j) => {
      let m = (i + j) >> 1;
      if (j - i <= 2) {
          let M = Math.max(arr[i], arr[j], arr[(i + j) >> 1]);
          if (M === arr[i]) return i;
          else if (M === arr[j]) return j;
          else return m;
      }
      if (arr[m] < arr[m + 1]) 
          return rec(m, j);
      else 
          return rec(i, m);
  };
  return rec(0, arr.length - 1);
};
