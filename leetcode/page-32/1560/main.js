/**
 * @param {number} n
 * @param {number[]} rounds
 * @return {number[]}
 */
 var mostVisited = function(n, rounds) {
  let count = new Array(n).fill(0);
  let pos = rounds[0] - 1;
  count[pos]++;
  let next = (newPos) => {
      while (pos !== newPos){
          pos = (pos + 1) % n;
          count[pos]++;
      }
  }
  for (let i = 1; i < rounds.length; i++) {
      next(rounds[i] - 1);
  }
  let result = [0];
  for (let i = 1; i < n; i++) {
      if (count[result[0]] < count[i]) {
          result = [i]
      } else if (count[result[0]] === count[i]) {
          result.push(i);
      }
  }
  return result.map(i => i + 1);
};
