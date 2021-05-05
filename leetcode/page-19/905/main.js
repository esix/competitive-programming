/**
 * @param {number[]} A
 * @return {number[]}
 */
 var sortArrayByParity = (A) => A.sort((a, b) => a % 2 - b % 2);
 