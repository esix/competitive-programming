/**
 * @param {string} s
 * @return {string}
 */
var removeDuplicates = function(s) {
    let a = [];
    s.split('').forEach(c => {
        a.push(c);
        while (a.length > 1 && a[a.length - 1] === a[a.length - 2]) a.length = a.length - 2;
    });
    return a.join('');
};
