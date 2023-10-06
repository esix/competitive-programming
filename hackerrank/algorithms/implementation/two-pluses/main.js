grid = [
  '_G__G__',
  'GGGGGG_',
  '_G__G__',
];

function twoPluses(grid) {
  let n = grid.length, m = grid[0].length;
  const plusSize = (i, j, l) => 
        0 <= i - l && i + l < n &&
        0 <= j - l && j + l < m &&
        grid[i-l][j] === 'G' && grid[i+l][j] === 'G' && 
        grid[i][j-l] === 'G' && grid[i][j+l] === 'G' ? 
          1 + plusSize(i, j, l + 1) :
          0;

  let ps = grid.map((row, i) => row.split('').map((c, j) => plusSize(i, j, 0)));

  const mul = (s1, s2) => s1 && s2 ? (1 + (s1 - 1) * 4) * (1 + (s2 - 1) * 4) : 0;

  let maxV = 0;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
      let s0 = ps[i][j];
      if (!s0) continue;
      for (let ii = i; ii < n; ii++) {
        for (let jj = (i === ii) ? j + 1 : 0; jj < m; jj++) {
          let s1 = ps[ii][jj];
          if (!s1) continue;
          let di = 1 + Math.abs(i - ii), dj = 1 + Math.abs(j - jj), d = Math.max(di, dj), v;
          if (di === 1 || dj === 1) {
            v = (d <= s0 + s1 - 1) ? mul(d >> 1, d - (d >> 1)) : mul(s0, s1);
          } else {
            v = 0;
          }
          console.log(`${s0}[${i},${j}]-${s1}(${ii},${jj}) => ${v},     ${di}, ${dj}`);
          maxV = Math.max(maxV, v);
        }
      }
    }
  }

  console.log(ps.map(String).join('\n'));

  return maxV;
}


console.log(twoPluses(grid));