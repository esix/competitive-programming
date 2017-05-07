/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function(s, p) {
    p = p.replace(/./g, (c) => {
        if ('\\/^$[]{}@#%!|():-+`"\''.indexOf(c) !== -1)
            return '\\' + c;
        else
            return c;
    });
    return !!s.match(`^${p}$`);
};
