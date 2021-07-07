/**
 * @param {number[][]} matrix
 * @param {number} k
 * @return {number}
 */
 var kthSmallest = (matrix, k) => Array.prototype.concat.apply([], matrix).sort((a, b) => a - b)[k - 1];
 