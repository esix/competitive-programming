/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
 var numJewelsInStones = (jewels, stones) => stones.split('').filter(c => jewels.includes(c)).length;
 