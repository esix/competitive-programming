'use strict';

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
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

function kaprekarNumbers(p, q) {
    const check = i => {
        const v = String(i * i);
        let d = v.length >> 1;
        return i === parseInt(v.substring(0, d) || '0') + 
                     parseInt(v.substring(d));
    };
    let nums = [];
    for (let i = p; i <= q; i++) {
        if (check(i)) nums.push(i);
    }
    console.log(nums.length ? nums.join(' ') : 'INVALID RANGE');
}

function main() {
    const p = parseInt(readLine().trim(), 10);

    const q = parseInt(readLine().trim(), 10);

    kaprekarNumbers(p, q);
}
