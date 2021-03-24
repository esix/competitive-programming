/**
 * @param {string} date
 * @return {string}
 */
 var reformatDate = function(date) {
  const [d, m, y] = date.match(/^(\d+)(?:th|nd|st|rd) (\w+) (\d+)$/).slice(1);
  const MONTHS = ["NULL", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
  return y.padStart(4, '0') + '-' + MONTHS.indexOf(m).toString().padStart(2, 0) + '-' + d.padStart(2, 0)
};
