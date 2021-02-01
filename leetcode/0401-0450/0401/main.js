/**
 * @param {number} num
 * @return {string[]}
 */
var readBinaryWatch = function(num) {
    function popCount(v) {
        let result = 0;
        for (; v; result++) v &= (v - 1);
        return result;
    }
    
    
    function * gen(max, bits) {
        for (let i = 0; i <= max; i++) {
            if (popCount(i) === bits) {
                yield i;
            }
        };
    }
    
    let result = [];
    debugger;
    for (let bitsToMin = 0; bitsToMin <= num; bitsToMin++) {
        for (let h of gen(11, num - bitsToMin)) {
            for (let m of gen(59, bitsToMin)) {
                result.push(h + ':' + m.toString().padStart(2, '0'));
            }
        }
    }
    return result;
};