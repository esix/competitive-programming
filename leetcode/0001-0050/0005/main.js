/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    if (s === '') return '';

    const n = s.length;

    let resultOdd = [0, 0], resultEven = [0, 0];

    let tbl = Array.apply(null, Array(n)).map((_,i) => [i,i]);
    let tblLen = n;

    for (let l = 3; (tblLen > 0) && (l <= n); l += 2) {
        let newLen = 0;

        for (let a = 0; a < tblLen; a++) {
            let i = tbl[a][0], k = tbl[a][1];
            if ((i - 1 >= 0) && (k + 1 < n) && s[i-1] == s[k+1] ) {
                tbl[newLen][0] = i-1;
                tbl[newLen][1] = k+1;
                newLen++;
            }
        }
        tblLen = newLen;
    }
    resultOdd = [tbl[0][0], tbl[0][1]];       // best result is always here


    tblLen = 0;
    for (let i = 0; i < n-1; i++) {
        if (s[i] === s[i+1]) {
            tbl[tblLen][0] = i;
            tbl[tblLen][1] = i+1;
            tblLen++;
        }
    }


    for (let l = 4; (tblLen > 0) && (l <= n); l += 2) {
        let newLen = 0;

        for (let a = 0; a < tblLen; a++) {
            let i = tbl[a][0], k = tbl[a][1];
            if ((i - 1 >= 0) && (k + 1 < n) && s[i-1] == s[k+1] ) {
                tbl[newLen][0] = i-1;
                tbl[newLen][1] = k+1;
                newLen++;
            }
        }
        tblLen = newLen;
    }
    resultEven = [tbl[0][0], tbl[0][1]];

    let oddLen = resultOdd[1] - resultOdd[0];
    let evenLen = resultEven[1] - resultEven[0];
    let result = (evenLen < oddLen) ? resultOdd : resultEven;
    return s.substring(result[0], result[1] + 1);
};
