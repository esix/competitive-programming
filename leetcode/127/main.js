/**
 * @param {string} beginWord
 * @param {string} endWord
 * @param {string[]} wordList
 * @return {number}
 */
var ladderLength = function(start, end, words) {
  const N = start.length;
  const isAdjacent = (a, b) => {
      let diff = 0;
      for (let i = 0; i < N; i++) diff += (a[i] != b[i]);
      return diff === 1;
  }
  if (!words.includes(end)) return 0;
  if (!words.includes(start)) words.push(start);

  let visited = {}, deep = {[start]: 1};
  let q = [start];
  while (q.length) {
      let word = q.shift();
      if (visited[word]) continue;
      visited[word] = true;
      let neighbours = words.filter(next => !visited[next] && 
                                            !q.includes(next) && 
                                            isAdjacent(next, word));
      neighbours.forEach(next => {
          q.push(next);
          deep[next] = deep[word] + 1;
      });
  }
  return deep[end] || 0;
};