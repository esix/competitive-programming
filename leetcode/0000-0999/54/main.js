/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(matrix) {
    let result = [];
    let rec = (i, j, h, w) => {
        if (w === 0 || h === 0) return;
        for (let jj = 0; jj < w; jj++) result.push(matrix[i][j + jj]);
        for (let ii = 1; ii < h; ii++) result.push(matrix[i + ii][j + w - 1]);
        if (w === 1 || h === 1) return;
        for (let jj = w - 2; jj >= 0; jj--) result.push(matrix[i + h - 1][j + jj]);
        for (let ii = h - 2; ii >= 1; ii--) result.push(matrix[i + ii][j]);
        rec(i + 1, j + 1, h - 2, w - 2);
    };
    rec(0, 0, matrix.length, matrix[0].length);
    return result;
};
