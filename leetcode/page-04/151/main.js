/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
  return [...s.matchAll(/\s*\w+\s*/g)].map(s => s[0].trim()).reverse().join(' ');
};