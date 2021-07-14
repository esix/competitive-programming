/**
 * @param {string} order
 * @param {string} str
 * @return {string}
 */
var customSortString = (order, str) => str.split('').sort((a, b) => order.indexOf(a) - order.indexOf(b)).join('');
