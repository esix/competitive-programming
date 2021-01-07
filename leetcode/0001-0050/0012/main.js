/**
 * @param {number} num
 * @return {string}
 */
var intToRoman = function(num) {
    const vs = [1000, 900,  500, 400,  100,   90,  50,  40,   10,    9,   5,    4,   1];
    const rs = [ 'M', 'CM', 'D', 'CD', 'C', 'XC', 'L', 'XL', 'X', 'IX', 'V', 'IV', 'I'];

    let result = '';
    for (let i = 0; i < vs.length; i++) {
        while (vs[i] <= num) {
            result += rs[i];
            num -= vs[i];
        }
    }
    return result;
};
