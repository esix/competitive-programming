/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    let result = [];
    let h = {};
    nums.forEach(n => h[n] = (h[n] || 0) + 1);
    let ks = Object.keys(h);
    ks.sort((a, b) => a-b);

    if (h[0] >= 3) {
        result.push([0,0,0]);
    }

    for (let i = 0; i < ks.length; i++) {             // [a,a,b]
        let iVal = +ks[i], iCount = h[iVal];
        if (iCount >= 2 && iVal) {
            let jVal = 0 - iVal - iVal;
            if (h[jVal]) {
                result.push([iVal, iVal, jVal]);
            }
        }
    }

    for (let i = 0; i < ks.length-2; i++) {
        for (let j = i+1; j < ks.length-1; j++) {
            let iVal = +ks[i], jVal = +ks[j], kVal = 0 - iVal - jVal;
            if (kVal > iVal && kVal > jVal && h[kVal]) {
                result.push([iVal, jVal, kVal]);
            }
        }
    }
    return result;
};
