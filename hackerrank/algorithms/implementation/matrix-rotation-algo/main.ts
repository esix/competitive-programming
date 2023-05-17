'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString: string = '';
let inputLines: string[] = [];
let currentLine: number = 0;

process.stdin.on('data', function(inputStdin: string): void {
    inputString += inputStdin;
});

process.stdin.on('end', function(): void {
    inputLines = inputString.split('\n');
    inputString = '';

    main();
});

function readLine(): string {
    return inputLines[currentLine++];
}

/*
 * Complete the 'matrixRotation' function below.
 *
 * The function accepts following parameters:
 *  1. 2D_INTEGER_ARRAY matrix
 *  2. INTEGER r
 */

function matrixRotation(matrix: number[][], r: number): void {
    const n = matrix.length, m = matrix[0].length;
    for (let i = 0; i < n; i++) {
        let row = [];
        for (let j = 0; j < m; j++) {
            const level = Math.min(i, j, n - i - 1, m - j - 1);
            const left = level, top = level, right = m - level - 1, bottom = n - level - 1;
            const nn = n - 2 * level, mm = m - 2 * level;
            const count = 2 * nn + 2 * mm - 4;
            const idx = level == i || level == m - j - 1 ? (i - level) + (j - level) : count / 2 + (m - j - 1 - level) + (n - i - 1 - level);
            const idx2 = (idx + r) % count;
            let ii, jj;
            if (idx2 < mm) { ii = top; jj = left + idx2; }
            else if (idx2 < mm + nn - 1) { ii = top + (idx2 - mm + 1); jj = right;  }
            else if (idx2 < mm + nn + mm - 2) { ii = bottom; jj = right - (idx2 - mm - nn + 2); }
            else { ii = bottom - (idx2 - mm - nn - mm) - 3; jj = left; }
            row.push(matrix[ii][jj]);
            
        }
        console.log(row.join(' '));
    }
}

function main() {
    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const m: number = parseInt(firstMultipleInput[0], 10);

    const n: number = parseInt(firstMultipleInput[1], 10);

    const r: number = parseInt(firstMultipleInput[2], 10);

    let matrix: number[][] = Array(m);

    for (let i: number = 0; i < m; i++) {
        matrix[i] = readLine().replace(/\s+$/g, '').split(' ').map(matrixTemp => parseInt(matrixTemp, 10));
    }

    matrixRotation(matrix, r);
}
