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
 * Complete the 'libraryFine' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER d1
 *  2. INTEGER m1
 *  3. INTEGER y1
 *  4. INTEGER d2
 *  5. INTEGER m2
 *  6. INTEGER y2
 */

function libraryFine(d1, m1, y1, d2, m2, y2) {
    const dm = Math.max(0, m1 - m2);
    const dd = Math.max(0, d1 - d2);
    return (y1 === y2) * (500 * dm + 15 * dd * (m1 === m2)) + (y1 > y2) * 10000;
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const firstMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const d1 = parseInt(firstMultipleInput[0], 10);

    const m1 = parseInt(firstMultipleInput[1], 10);

    const y1 = parseInt(firstMultipleInput[2], 10);

    const secondMultipleInput = readLine().replace(/\s+$/g, '').split(' ');

    const d2 = parseInt(secondMultipleInput[0], 10);

    const m2 = parseInt(secondMultipleInput[1], 10);

    const y2 = parseInt(secondMultipleInput[2], 10);

    const result = libraryFine(d1, m1, y1, d2, m2, y2);

    ws.write(result + '\n');

    ws.end();
}
