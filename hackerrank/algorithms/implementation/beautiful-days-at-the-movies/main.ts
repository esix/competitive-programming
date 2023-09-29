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
 * Complete the 'beautifulDays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER i
 *  2. INTEGER j
 *  3. INTEGER k
 */

function beautifulDays(i: number, j: number, k: number): number {
    const reverse = (i: number) => +[...i.toString()].reverse().join('');
    const isBeautiful = (i: number) => Math.abs(i - reverse(i)) % k === 0;
    let result = 0;
    while (i <= j) result += +isBeautiful(i++);
    return result;    
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const i: number = parseInt(firstMultipleInput[0], 10);

    const j: number = parseInt(firstMultipleInput[1], 10);

    const k: number = parseInt(firstMultipleInput[2], 10);

    const result: number = beautifulDays(i, j, k);

    ws.write(result + '\n');

    ws.end();
}
