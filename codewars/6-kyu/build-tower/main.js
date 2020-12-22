function towerBuilder(n) {
  let result = [];
  for (let i = 0; i < n; i++) {
      result.push(
          ''.padEnd(n - i - 1, ' ') + 
          ''.padEnd(2 * i + 1, '*') + 
          ''.padEnd(n - i - 1, ' '));
  }
  return result;
}