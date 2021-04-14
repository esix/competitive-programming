/**
 * @param {string} s
 * @return {string}
 */
var freqAlphabets = (s) => s.replace(/([12]\d#)|\d/g, (c) => String.fromCharCode(parseInt(c) + 96));
