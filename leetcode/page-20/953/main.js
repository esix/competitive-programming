/**
 * @param {string[]} words
 * @param {string} order
 * @return {boolean}
 */
 var isAlienSorted = function(words, order) {
  let cLessOrEqual = (c1, c2) => {
      let i1 = order.indexOf(c1), i2 = order.indexOf(c2);
      return i1 <= i2;
  }
  let lessOrEqual = (word1, word2) => {
      const N = Math.min(word1.length, word2.length) + 1;
      for (let i = 0; i < N; i++) {
          if (word1[i] !== word2[i]) {
              return cLessOrEqual(word1[i], word2[i])
          }
      }
      return true;  // equal
  }
  for (let i = 1; i < words.length; i++) {
      if (!lessOrEqual(words[i-1], words[i])) return false;
  }
  return true;
};
