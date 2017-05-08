/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    const rs = ['CM', 'M', 'CD', 'D', 'XC', 'C', 'XL', 'L', 'IX', 'X', 'IV', 'V',  'I'];
    const vs = [900 ,1000,  400, 500,  90 , 100,  40,   50,    9,  10,    4,   5,    1];

    let result = 0;
    while (s.length) {
        for (let i = 0; i < rs.length; i++) {
            if (s.slice(0, rs[i].length) === rs[i]) {
                result += vs[i];
                s = s.slice(rs[i].length);
                break;
            }
        }
    }
    return result;
};
