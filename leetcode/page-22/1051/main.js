/**
 * @param {number[]} heights
 * @return {number}
 */
 var heightChecker = function(heights) {
  let s = heights.slice(0).sort((a, b) => a - b);
  let result = 0;
  for (let i = 0; i < heights.length; i++) {
      if (s[i] !== heights[i]) result++;
  }
  return result;
};
