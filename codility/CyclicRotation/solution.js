// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(A, K) {
  const N = A.length;
  K = K % N;
  return A.map((_, i) => A[(i + N - K) % N]);
}
