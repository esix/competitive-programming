'use strict';

import { WriteStream, createWriteStream } from "fs";
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
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

function encryption(s: string): string {
    s = s.replace(/ /g, '');
    let cols = Math.floor(Math.sqrt(s.length)), rows = cols;
    if (rows * cols < s.length) cols++;
    if (rows * cols < s.length) rows++;
    let result: string[] = [];
    for (let c = 0; c < cols; c++) {
        for (let r = 0; r < rows; r++) {
            result.push(s[r * cols + c] || '');
            if (r === rows - 1) result.push(' ')
        }
    };
    return result.join('');
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const s: string = readLine();

    const result: string = encryption(s);

    ws.write(result + '\n');

    ws.end();
}
