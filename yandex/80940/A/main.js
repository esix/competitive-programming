const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', (input) => {
  const n = parseInt(input);
  a = [1];
  for (let i = 1; i <= n; i++) {
    a[i] = (a[i - 3]??0) + (a[i - 2]??0) + (a[i - 1]??0)
  }
  console.log(a[n]);
  rl.close();
});
