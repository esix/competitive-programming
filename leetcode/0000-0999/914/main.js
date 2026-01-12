/**
 * @param {number[]} deck
 * @return {boolean}
 */
 var hasGroupsSizeX = function(deck) {
  let h = {};
  deck.forEach(i => h[i] = (h[i] || 0) + 1);
  let values = Object.values(h);
  const gcd = (a, b) => !b ? a : gcd(b, a % b);
  return values.reduce(gcd) !== 1;
};
