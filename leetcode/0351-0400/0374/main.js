/** 
 * Forward declaration of guess API.
 * @param {number} num   your guess
 * @return 	            -1 if num is lower than the guess number
 *			             1 if num is higher than the guess number
 *                       otherwise return 0
 * var guess = function(num) {}
 */

/**
 * @param {number} n
 * @return {number}
 */
var guessNumber = function(n) {
  function f(min, max) {
      if (min === max) return min;
      let guessNumber = Math.floor((min + max) / 2);
      let indicator = guess(guessNumber);
      if (indicator === -1) {
          return f(min, guessNumber - 1)
      } else if (indicator === +1) {
          return f(guessNumber + 1, max)
      } else {
          return guessNumber;
      }        
  };
  return f(1, n);
};