/**
 * @param {number[]} position
 * @return {number}
 */
 var minCostToMoveChips = function(position) {
  let evens = position.filter(p => p % 2 === 0).length, odds = position.length - evens;
  return Math.min(odds, evens);                      
};
