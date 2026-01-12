/**
 * @param {number[]} customers
 * @param {number[]} grumpy
 * @param {number} X
 * @return {number}
 */
 var maxSatisfied = function(customers, grumpy, X) {
  let i = 0, s = 0;
  for (; i < X; i++) {
      s += customers[i];
  }
  
  let best = s;
  
  for (; i < customers.length; i++) {
      s = s - grumpy[i - X] * customers[i - X] + customers[i];
      best += (1 - grumpy[i]) * customers[i];
      best = Math.max(best, s);
  }
  return best;
};
