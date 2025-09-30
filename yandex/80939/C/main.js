const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', (input) => {
  const h = {};
  for (let c of input) h[c] = (h[c] ?? 0) + 1;
  const vs = Object.values(h);
  let r = 1, s = 0;
  for (let v of vs) {
    r += v * s;
    s += v;
  }
  console.log(r);
  rl.close();
});