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
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

function biggerIsGreater(w: string): string {
    let cs = w.split(''), N = cs.length;
    let i: number, j: number;
    for (i = cs.length - 1; i > 0 && cs[i - 1] >= cs[i]; i--);
    if (i <= 0) return 'no answer';
    for (j = cs.length - 1; cs[j] <= cs[i - 1]; j--);
    [cs[i - 1], cs[j]] = [cs[j], cs[i - 1]];
    for (j = cs.length - 1; i < j; i++, j--) {
        [cs[i], cs[j]] = [cs[j], cs[i]];
    }
    return cs.join('');
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const T: number = parseInt(readLine().trim(), 10);

    for (let TItr: number = 0; TItr < T; TItr++) {
        const w: string = readLine();

        const result: string = biggerIsGreater(w);

        ws.write(result + '\n');
    }

    ws.end();
}
