/**
 * @param {number[]} height
 * @return {number}
 */
 var maxArea = function(height) {
  let a = 0, b = height.length - 1;
  let result = -Infinity;
      
  while(a < b) {
      let s = Math.min(height[a], height[b]) * (b - a);

      if (result < s) {
          result = s;
      }
          
      if (height[a] > height[b]) {
          b -= 1;
      } else {
          a += 1;
      }
  }
      
  return result;
};
