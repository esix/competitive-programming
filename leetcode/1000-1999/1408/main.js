/**
 * @param {string[]} words
 * @return {string[]}
 */
 var stringMatching = function(words) {
  return words.filter(word => words.find(word2 => word2 !== word && word2.includes(word)));
};
