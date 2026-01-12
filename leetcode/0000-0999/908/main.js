/**
 * @param {number[]} A
 * @param {number} K
 * @return {number}
 */
 var smallestRangeI = function(A, K) {
    let min = Math.min.apply(Math, A);
    let max = Math.max.apply(Math, A);
    return Math.max(0, (max - K) - (min + K));
}
