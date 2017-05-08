/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    if (strs.length === 1) {
        return strs[0];
    }
    let result = '';
    try {
        for (let i = 0; true; i++) {
            strs.reduce((a, b) => {
                if (a[i] === undefined || a[i] !== b[i]) throw new Error('Finished');
                return b;
            });
            result += strs[0][i];
        }
    } catch(err) {
        //
    }
    return result;
};
