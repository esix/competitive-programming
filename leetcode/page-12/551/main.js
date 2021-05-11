/**
 * @param {string} s
 * @return {boolean}
 */
 var checkRecord = (s) => !(s.includes('LLL') || (s.match(/A/g) || []).length >= 2);
