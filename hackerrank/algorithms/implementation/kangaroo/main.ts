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
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

function kangaroo(x1: number, v1: number, x2: number, v2: number): string {
    // Write your code here
    const dx = x2 - x1, 
          dv = v2 - v1, 
          res = dv === 0 ? 
                    dx === 0 :
                    dx % dv === 0 && dx / dv <= 0;
    return res ? 'YES' : 'NO'
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const x1: number = parseInt(firstMultipleInput[0], 10);

    const v1: number = parseInt(firstMultipleInput[1], 10);

    const x2: number = parseInt(firstMultipleInput[2], 10);

    const v2: number = parseInt(firstMultipleInput[3], 10);

    const result: string = kangaroo(x1, v1, x2, v2);

    ws.write(result + '\n');

    ws.end();
}
