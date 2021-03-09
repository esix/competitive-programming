/**
 * @param {string[]} words
 * @return {number}
 */
var uniqueMorseRepresentations = function(words) {
  const MORZE = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."];
  return new Set(words.map(w => 
    w.split('').map(c => MORZE[c.charCodeAt(0) - 97 ]).join(''))).size;
};
