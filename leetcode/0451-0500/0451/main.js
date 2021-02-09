/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let h = {};
    for (let c of s) h[c] = (h[c] || 0) + 1;
    return s.split('').sort((c1, c2) => h[c2] === h[c1] ? c1.charCodeAt(0) - c2.charCodeAt(0) : h[c2] - h[c1] ).join('');
};
