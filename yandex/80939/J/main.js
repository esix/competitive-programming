const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});


let n = 0, lists = {};

const R_DECLARE = /^List (?<a>\w+) = new List\((?<items>.+)\)$/;
const R_SUBLIST = /^List (?<b>\w+) = (?<a>\w+)\.subList\((?<from>\d+),(?<to>\d+)\)$/;
const R_SET = /^(?<a>\w+).set\((?<i>\d+),(?<x>\d+)\)$/;
const R_ADD = /^(?<a>\w+).add\((?<x>\d+)\)$/;
const R_GET = /^(?<a>\w+).get\((?<i>\d+)\)$/;


class Arr {
  arr = [];

  constructor(arr) {
    this.arr = arr;
  }

  set(i, x) {
    this.arr[i] = x;
  }

  get(i) {
    return this.arr[i]
  }

  add(x) {
    this.arr.push(x);
  }

  slice(from, to) {
    return new Slice(this, from, to)
  }
}


class Slice {
  arr = [];
  from = 1;
  to = 1;

  constructor(arr, from, to) {
    this.arr = arr;
    this.from = from;
    this.to = to;
  }

  set(i, x) {
    this.arr.set(i + this.from, x);
  }

  get(i) {
    return this.arr.get(i + this.from)
  }

  add(x) {
    //
  }

  slice(from, to) {
    return new Slice(this.arr, from + this.from, to + this.from)
  }
}


rl.on('line', (input) => {
  if (n == 0) {
    n = parseInt(input);
  } else {
    let m;
    if ((m = input.match(R_DECLARE)?.groups)) {
      lists[m.a] = new Arr(m.items.split(',').map(v => +v));
    } else if ((m = input.match(R_SUBLIST)?.groups)) {
      lists[m.b] = lists[m.a].slice(+m.from - 1, +m.to - 1);
    } else if ((m  = input.match(R_SET)?.groups)) {
      lists[m.a].set(+m.i - 1, +m.x);
    } else if ((m = input.match(R_ADD)?.groups)) {
      lists[m.a].add(+m.x);
    } else if ((m = input.match(R_GET)?.groups)) {
      console.log(lists[m.a].get(+m.i - 1));
    } else {
      throw new Error('Unknown operator', input);
    }



    if (--n == 0) {
      rl.close();
    }
  }
});
