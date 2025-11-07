const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});


const ORIGIN = 0;
const HANDS = 1;
const HOME = 2;

rl.on('line', (input) => {
  const [a, b, ab, v0, v1, v2] = input.split(' ').map(v => parseInt(v));

  const q = [];
  const time = {};
  const getTime = s => time[s.p + s.a + s.b];

  const takeMinFromQ = () => {
    let bestS = q[0], bestIndex = 0, bestTime = getTime(q[0]);
    for (let i = 1; i < q.length; i++) {
      const s = q[i], t = getTime(s);
      if (t < bestTime) {
        bestS = s;
        bestIndex = i;
        bestTime = t;
      }
    }
    q.splice(bestIndex, 1);
    return bestS;
  };

  const isFinish = s => s.p === 'h' && s.a === HOME && s.b === HOME;

  const addState = (p, a, b, t) => {
    const h = p + a + b;
    if (h in time) {                                              // visited
      time[h] = Math.min(time[h], t);
    } else {
      time[h] = t;
      q.push({p, a, b});
    }
  };

  addState('h', ORIGIN, ORIGIN, 0);


  while (q.length) {
    let s = takeMinFromQ(), t = getTime(s);
    if (isFinish(s)) {
      console.log(t);
      break;
    }

    let v;
    if (s.a === HANDS && s.b === HANDS) v = v2;
    else if (s.a === HANDS || s.b === HANDS) v = v1;
    else v = v0;

    if (s.p === 'h') {
      if (s.a === HANDS) addState('h', HOME, s.b, t);
      if (s.b === HANDS) addState('h', s.a, HOME, t);
      addState('a', s.a, s.b, t + a / v);
      addState('b', s.a, s.b, t + b / v);
    } else if (s.p === 'a') {
      if (s.a === ORIGIN) addState('a', HANDS, s.b, t);
      addState('h', s.a, s.b, t + a / v);
      addState('b', s.a, s.b, t + ab / v);
    } else if (s.p === 'b') {
      if (s.b === ORIGIN) addState('b', s.a, HANDS, t);
      addState('h', s.a, s.b, t + b / v);
      addState('a', s.a, s.b, t + ab / v);
    }
  }

  rl.close();
});