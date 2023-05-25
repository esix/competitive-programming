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
 * Complete the 'surfaceArea' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY A as parameter.
 */

function surfaceArea(A: number[][]): number {
    const n = A.length, m = A[0].length;
    const h = (i: number, j: number) => 0 <= i && i < n && 0 <= j && j < m ? A[i][j] : 0;
    let result = n * m * 2;                                          // top and bottom
    for (let i = 0; i < n; i++) {
        for (let j = 0; j < m; j++) {
            result += Math.abs(h(i,j) - h(i + 1, j)) + Math.abs(h(i,j) - h(i, j + 1));
        }
    }
    for (let i = 0; i < n; i++) result += A[i][0];
    for (let j = 0; j < m; j++) result += A[0][j];
    return result;

}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const H: number = parseInt(firstMultipleInput[0], 10);

    const W: number = parseInt(firstMultipleInput[1], 10);

    let A: number[][] = Array(H);

    for (let i: number = 0; i < H; i++) {
        A[i] = readLine().replace(/\s+$/g, '').split(' ').map(ATemp => parseInt(ATemp, 10));
    }

    const result: number = surfaceArea(A);

    ws.write(result + '\n');

    ws.end();
}
