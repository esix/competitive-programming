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
 * Complete the 'timeInWords' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER h
 *  2. INTEGER m
 */

function timeInWords(h: number, m: number): string {
    const n0_19 = [
        '', 'one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine',
        'ten', 'eleven', 'twelve', 'thirteen', 'fourteen', 'quarter', 'sixteen', 'seventeen', 'eighteen', 'nineteen'];
    const makeTens = (prefix: string) => new Array(10).fill(0).map((_, idx) => idx ? `${prefix} ${n0_19[idx]}` : prefix);
    const numbers = [
        ...n0_19,
        ...makeTens('twenty'),
        'half'
    ];
    const s = m == 1 || m == 59 ? '' : 's';
    if (m === 0) return `${numbers[h]} o' clock`;
    else if (m == 15) return `quarter past ${numbers[h]}`
    else if (m == 30) return `half past ${numbers[h]}`
    else if (m == 45) return `quarter to ${numbers[h + 1]}`
    else if (m <= 30) return `${numbers[m]} minute${s} past ${numbers[h]}`
    else return `${numbers[60 - m]} minute${s} to ${numbers[h + 1]}`;
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const h: number = parseInt(readLine().trim(), 10);

    const m: number = parseInt(readLine().trim(), 10);

    const result: string = timeInWords(h, m);

    ws.write(result + '\n');

    ws.end();
}
