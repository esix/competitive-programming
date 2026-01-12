/**
 * @param {string[]} A
 * @return {string[]}
 */
var commonChars = function(A) {
    let h = (s) => {
        let result = {};
        for (let c of s) result[c] = (result[c] || 0) + 1;
        return result;
    };
    let mergeMin = (h1, h2) => {
        let result = {};
        Object.keys(h1).forEach(c => {
            if (h2[c]) result[c] = Math.min(h1[c], h2[c]);
        });
        return result;
    };
    let linearify = h => {
        let result = [];
        for (let c in h) {
            for (let i = 0; i < h[c]; i++) result.push(c);
        }
        return result;
    }
    let result = linearify(A.map(h).reduce(mergeMin));
    return result;    
};
