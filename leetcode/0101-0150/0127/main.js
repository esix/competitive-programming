/**
 * @param {string} beginWord
 * @param {string} endWord
 * @param {string[]} wordList
 * @return {number}
 */
var ladderLength = function(start, end, words) {
    debugger;
  const N = start.length;
  const isAdjacent = (a, b) => {
      let diff = 0;
      for (let i = 0; i < N; i++) if ((diff += (a[i] != b[i])) > 1) return false;
      return diff === 1;
  }
  if (!words.includes(end)) return 0;
  if (!words.includes(start)) words.push(start);

  let deep = {[start]: 1};
  let q = [start];
  while (q.length) {
      let word = q.shift();
      let neighbours = words.filter(next => !deep[next] && 
                                            isAdjacent(next, word));
      neighbours.forEach(next => {
          q.push(next);
          deep[next] = deep[word] + 1;
      });
  }
  return deep[end] || 0;
};