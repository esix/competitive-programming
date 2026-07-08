// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(n) {
  if (n === 0) return 0;
  while ((n & 1) === 0) n >>= 1;
  while ((n & 1) === 1) n >>= 1;
  let result = 0;
  while (n !== 0) {
    let localResult = 0;
    while ((n & 1) === 0) {
      n >>= 1;
      localResult++;
    }
    while ((n & 1) === 1) n >>= 1;
    result = Math.max(result, localResult);
  }
  return result;
}
