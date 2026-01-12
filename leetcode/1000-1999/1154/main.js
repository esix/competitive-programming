/**
 * @param {string} date
 * @return {number}
 */
 var dayOfYear = function(date) {
  const [y, m, d] = date.match(/^(\d\d\d\d)-(\d\d)-(\d\d)$/).slice(1);
  return [0, 31, 
          28 + ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0)),
          31, 30, 31, 30, 31, 31, 30, 31, 30, 31].slice(0, m).reduce((a, b) => a + b, 0) + +d;
};
