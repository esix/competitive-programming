/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if (numRows === 1) return s;

    let c = 2 * numRows - 2;
    let result = '';
    for (let i = 0; i < numRows; i++) {
        for(let j = i; j < s.length; j = j + c){
           result = result + s[j];
           let k = (j - i) + c - i;
           if (i !== 0 && i !== numRows - 1 && k < s.length)
               result = result + s[k];
        }
    }
    return result;
};
