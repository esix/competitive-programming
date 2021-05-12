/**
 * @param {string} s
 * @return {string}
 */
 var reverseWords = s => s.split(' ').map(w => w.split('').reverse().join('')).join(' ');
 