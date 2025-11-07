const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', (input) => {
  let prevL = 0;
  let prevR = 1;

  for (let c of input) {
    const l = prevL + (c === 'L' || c === 'B');
    const r = prevR + (c === 'R' || c === 'B');
    prevL = Math.min(l, r + 1);
    prevR = Math.min(r, l + 1);
  }
  console.log(prevR);

  rl.close();
});

