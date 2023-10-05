'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', function(inputStdin) {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.split('\n');

    main();
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the 'bomberMan' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING_ARRAY grid
 */

function bomberMan(n, grid) {
    const nextStep = (grid) => 
        grid.map((row, i) => row.split('').map((c, j) => 
          (grid[i]?.[j] === 'O' ||
                    grid[i+1]?.[j] === 'O' || grid[i-1]?.[j] === 'O' || 
                    grid[i]?.[j+1] === 'O' || grid[i]?.[j-1] === 'O') ?
                      '.' :  'O'
              ).join(''));

    if (n % 2 === 0) return grid.map((row, i) => row.split('').map((c, j) => 'O').join(''));
    else if (n === 1) return grid;
    else if (n === 3) return nextStep(grid);
    else if (n % 4 == 1) return nextStep(nextStep(grid));
    else if (n % 4 == 3) return nextStep(nextStep(nextStep(grid))); 
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const r = parseInt(firstMultipleInput[0], 10);

    const c = parseInt(firstMultipleInput[1], 10);

    const n = parseInt(firstMultipleInput[2], 10);

    let grid = [];

    for (let i = 0; i < r; i++) {
        const gridItem = readLine();
        grid.push(gridItem);
    }

    const result = bomberMan(n, grid);

    ws.write(result.join('\n') + '\n');

    ws.end();
}
