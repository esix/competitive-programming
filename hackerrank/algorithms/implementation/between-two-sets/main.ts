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
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

function getTotalX(a: number[], b: number[]): number {
    // Write your code here
    const lcm = (arr: number[]) => {
        const gcd2 = (a: number, b: number): number => b ? gcd2(b, a % b) : a;
        const lcm2 = (a: number, b: number) => a * b / gcd2(a, b);
        return arr.reduce(lcm2, 1);
    };
    let l = lcm(a), result = 0;
    for (let m = l; m <= 100; m += l) {
        if (b.every(v => v % m === 0))
            result++;
    }
    return result;
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const n: number = parseInt(firstMultipleInput[0], 10);

    const m: number = parseInt(firstMultipleInput[1], 10);

    const arr: number[] = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    const brr: number[] = readLine().replace(/\s+$/g, '').split(' ').map(brrTemp => parseInt(brrTemp, 10));

    const total: number = getTotalX(arr, brr);

    ws.write(total + '\n');

    ws.end();
}
