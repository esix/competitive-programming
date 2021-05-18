/**
 * @param {number[][]} envelopes
 * @return {number}
 */
 var maxEnvelopes = function(envelopes) {
  let gt = (a, b) => a[0] > b[0] && a[1] > b[1];
  envelopes.forEach(e => {
      e.nexts = envelopes.filter(e1 => gt(e, e1));
  });
  let getValue = (e) => {
      if (e.nexts.length === 0) return 1;
      if (e.value === undefined) {
          let vs = e.nexts.map(e1 => getValue(e1) + 1);
          let v = Math.max.apply(Math, vs);
          e.value = v;
      }
      return e.value;
  };
  return Math.max.apply(Math, envelopes.map(getValue));
};
