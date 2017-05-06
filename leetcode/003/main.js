/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let result = 0;
    let l1 = 0, l2 = 0;                    // boundaries
    const used = {};
    for (; l2 < s.length; l2++) {
        const c = s[l2];

        if (l1 <= used[c]) {             // previous char position in boundaries
            l1 = used[c] + 1;              // lower boundary next
        }

        used[c] = l2;

        if (result < l2 - l1 + 1) {
          result = l2 - l1 + 1;
        }
    }
    return result;
};
