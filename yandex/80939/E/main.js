const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', (input) => {
  let [n, k] = input.split(' ').map(v => parseInt(v));
  rl.close();

  const lastDigit = n => n % 10;

  let cycle = [];
  while (k > 0) {
    let d = lastDigit(n);
    if (cycle.includes(d)) {
      cycle = cycle.slice(cycle.indexOf(d));
      break;
    }
    cycle.push(d);
    n += d;
    k--;
  }

  if (k) {
    for (let i = 0; i < cycle.length; i++) {
      n += cycle[i] * (Math.floor(k / cycle.length) + (k % cycle.length > i));
    }
  }
  console.log(n);
});
