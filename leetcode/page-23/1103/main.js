/**
 * @param {number} candies
 * @param {number} num_people
 * @return {number[]}
 */
 var distributeCandies = function(candies, num_people) {
  const n = num_people, c = candies, result = new Array(n).fill(0);
  const D = n * n / 4 + 2 * n * n * c;                            // solve n²k²/2 + nk/2 - c <= 0 for k
  const k = Math.floor((-n / 2 + Math.sqrt(D)) / (n * n));        // k is number of iterations, so floor it to get full
  for (let i = 0; i < n; i++) {
      result[i] = k * (2 * (i + 1) + n * (k - 1)) / 2;            // after full k iterations each will receive candies
  }
  let given = (k * n + 1) * k * n / 2;                            // and for total will be given so candies
  for (let i = 0; i < n; i++) {
      let wannaGive = n * k + i + 1;
      let willGive = Math.min(wannaGive, c - given);
      result[i] += willGive;
      given += willGive;
  }
  return result;
};
