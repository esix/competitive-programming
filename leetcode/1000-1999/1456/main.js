/**
 * @param {string} s
 * @param {number} k
 * @return {number}
 */
 var maxVowels = function(s, k) {
  const VOWELS = {a: true, e: true, i: true, o: true, u: true};
  let maxN = 0;
  for (let i = 0; i < k; i++) if (VOWELS[s[i]]) maxN++;
  let n = maxN;
  for (let i = k; i < s.length; i++) {
      if (VOWELS[s[i]]) n++;
      if (VOWELS[s[i - k]]) n--;
      maxN = Math.max(n, maxN);
  }
  return maxN;
};
