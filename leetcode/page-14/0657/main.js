/**
 * @param {string} moves
 * @return {boolean}
 */
 var judgeCircle = function(moves) {
  let x = 0, y = 0;
  const M = {
      U: () => y--,
      D: () => y++,
      L: () => x--,
      R: () => x++,
  };
  moves.split('').forEach(m => M[m]());
  return x === 0 && y === 0;
};
