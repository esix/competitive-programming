/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function(str) {
    let n = parseInt(str);
    if (isNaN(n)) n = 0;
    if (n > 0x7FFFFFFF) n = 0x7FFFFFFF
    if (n <-0x80000000) n =-0x80000000;

    return n;
};
