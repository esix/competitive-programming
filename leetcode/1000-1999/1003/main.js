/**
 * @param {string} s
 * @return {boolean}
 */
 var isValid = function(s) {
  while (true) {
      let newS = s.replaceAll('abc', '');
      if (newS === '') return true;
      if (newS.length === s.length) return false;
      s = newS;
  }
};

