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
 * Complete the 'jumpingOnClouds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY c as parameter.
 */

function jumpingOnClouds(c: number[]): number {
    if (c.length === 2) return 1;
    let a1 = !c[1] ? 1 : Infinity, 
        a0 = !c[2] ? 1 : Infinity;
    for (let i = 3; i < c.length; i++) {
        [a0, a1]= [!c[i] ? Math.min(a0, a1) + 1 : Infinity, a0];
    }
    return a0;
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const n: number = parseInt(readLine().trim(), 10);

    const c: number[] = readLine().replace(/\s+$/g, '').split(' ').map(cTemp => parseInt(cTemp, 10));

    const result: number = jumpingOnClouds(c);

    ws.write(result + '\n');

    ws.end();
}
