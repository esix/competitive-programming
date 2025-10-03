const readline = require('node:readline/promises');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function solveBFS(x1, y1, x2, y2) {
  if (x1 == x2 && y1 == y2) return 0;

  const dists = {
    [`${x1},${y1},0`]: 0,
    [`${x1},${y1},1`]: 0,
    [`${x1},${y1},2`]: 0, 
    [`${x1},${y1},3`]: 0,
  };
  const q = Object.keys(dists);
  const isFinish = (state) => state.startsWith(`${x2},${y2},`);

  while (q.length) {
    const s = q.shift();
    const dist = dists[s];
    if (isFinish(s)) {
      return dist - 1;
    }

    const [x, y, d] = s.split(',').map(v => parseInt(v));

    const s1 = `${x + (d == 3) - (d == 1)},${y + (d == 0) - (d == 2)},${(d + 1) % 4}`;
    if (!(s1 in dists)) {
      dists[s1] = dist + 1;
      q.push(s1);
    }

    const s2 = `${x + (d == 2) - (d == 0)},${y + (d == 3) - (d == 1)},${(d + 2) % 4}`;
    if (!(s2 in dists)) {
      dists[s2] = dist + 1;
      q.push(s2);
    }
  }
} 


function solve(x1, y1, x2, y2) {
  const x = Math.abs(x2 - x1);
  const y = Math.abs(y2 - y1);
  if (x == 0 && y == 0) return 0;
  if (x == 0 || y == 0) return -3 + (x || y) * 3;
  let v = -3 + x * 3 + 1 + (y - 1) * 3;
  return v;
};

// const range = Array.from({ length: 15 }, (_, i) => i);
// for (let y of range) {
//   console.log(range.map(x => String(solveBFS(7, 7, x, y)).padEnd(4)).join(' '));
// }


const lines = [];

rl.on('line', (input) => {
  lines.push(input);
  if (lines.length === 2) {
    const [x1, y1] = lines[0].split(' ').map(v => parseInt(v));
    const [x2, y2] = lines[1].split(' ').map(v => parseInt(v));
    console.log(solve(x1, y1, x2, y2));
    rl.close();
  }
});
