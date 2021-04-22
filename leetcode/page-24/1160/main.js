/**
 * @param {string[]} words
 * @param {string} chars
 * @return {number}
 */
 var countCharacters = function(words, chars) {
  const h = (word) => word.split('').reduce((acc, w) => ({...acc, [w]: (acc[w] || 0) + 1}), {});
  const ex = h(chars);
  const hIn = (h, H) => !Object.keys(h).find(l => h[l] > (H[l] || 0));
  return words.filter(word => hIn(h(word), ex)).map(w => w.length).reduce((a, b) => a + b, 0);
};
