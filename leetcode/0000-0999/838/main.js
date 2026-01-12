/**
 * @param {string} dominoes
 * @return {string}
 */
 var pushDominoes = (dominoes) => dominoes.replace(/\.+/g, (dots, idx) => {
  let n = dots.length, l = dominoes[idx - 1] || '_', r = dominoes[idx + n] || '_';
  let c = '';
  switch (l + r) {
      case '__': c = '.'; break;
      case '_L': c = 'L'; break;
      case '_R': c = '.'; break;
      case 'L_': c = '.'; break;
      case 'LL': c = 'L'; break;
      case 'LR': c = '.'; break;
      case 'R_': c = 'R'; break;
      case 'RL': return dots.replace(/\./g, (_, j) => j <= n / 2 - 1 ? 'R' : j >= n / 2 ? 'L' : '.');
      case 'RR': c = 'R'; break;
  }
  return new Array(n).fill(c).join('');
});
