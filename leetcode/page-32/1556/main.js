/**
 * @param {number} n
 * @return {string}
 */
 var thousandSeparator = (n) => String(n).replace(/\B(?=(\d{3})+(?!\d))/g, '.');
 