/**
 * @param {number} m
 * @param {number} n
 * @param {number[][]} indices
 * @return {number}
 */
 var oddCells = function(R, C, indices) {
  let rr = new Array(R).fill(0), cc = new Array(C).fill(0);
  indices.forEach(([r, c]) => {rr[r]++; cc[c]++});
  let rInverts = rr.filter(v => v % 2 === 1).length;
  let cInverts = cc.filter(v => v % 2 === 1).length;
  return (R - rInverts) * cInverts + rInverts * (C - cInverts);
};
