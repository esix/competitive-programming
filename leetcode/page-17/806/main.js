/**
 * @param {number[]} widths
 * @param {string} s
 * @return {number[]}
 */
 var numberOfLines = function(widths, s) {
  let i = 0, w = 0;
  for (let c of s) {
      let cw = widths[c.charCodeAt(0) - 97];
      w += cw;
      if (w > 100) {
          i++;
          w = cw;
      }
  }
  return [i + 1, w]
};
