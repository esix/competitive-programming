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
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

function dayOfProgrammer(year: number): string {
    // Write your code here
    const isJulian = year <= 1917;
    const isLeap = isJulian ? 
            year % 4 === 0 : 
            year % 400 === 0 || (year % 4 === 0 && year % 100 !== 0);
    const months = [
        0, 
        31, 
        year === 1918 ? 15 : (isLeap ? 29 : 28),
        31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let m = 0, d = 256;
    while (d - months[m] > 0)d -= months[m++];
    return `${String(d).padStart(2, '0')}.${String(m).padStart(2, '0')}.${year}`;
}  

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const year: number = parseInt(readLine().trim(), 10);

    const result: string = dayOfProgrammer(year);

    ws.write(result + '\n');

    ws.end();
}
