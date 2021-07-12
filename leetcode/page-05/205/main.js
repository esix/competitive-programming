/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
 var isIsomorphic = function(s, t) {
  let h1 = {}, h2 = {};
  for (let i = 0; i < s.length; i++) {
      let c1 = s[i], c2 = t[i];
      if ((c1 in h1) && h1[c1] !== c2) return false;
      if ((c2 in h2) && h2[c2] !== c1) return false;
      h1[c1] = c2;
      h2[c2] = c1;
  }
  return true;    
};
