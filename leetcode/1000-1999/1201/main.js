/**
 * @param {number} n
 * @param {number} a
 * @param {number} b
 * @param {number} c
 * @return {number}
 */
 var nthUglyNumber = function(n, a, b, c) {
  n = BigInt(n);
  a = BigInt(a);
  b = BigInt(b);
  c = BigInt(c);
  const gcd = (a, b) => b ? gcd(b, a % b) : a;
  const lcm = (a, b) => a * b / gcd(a, b);

  const ab = lcm(a, b);
  const bc = lcm(b, c);
  const ac = lcm(a, c);
  const abc = lcm(ab, bc);
  
  const getIndex = (v) => v / a + v / b + v / c - v / ab - v / bc - v / ac + v / abc;
  
  let start = 1n, end = 1n;
  while (getIndex(end) < n) { start = end; end *= 2n;}
  while (end - start > 1n) {
      let m = (start + end) / 2n;
      let index = getIndex(m);
      if (index >= n) end = m;
      else start = m;
  }
  return Number(end);
};
