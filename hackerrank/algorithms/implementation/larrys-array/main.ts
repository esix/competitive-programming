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
 * Complete the 'larrysArray' function below.
 *
 * The function is expected t'use strict';

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
 * Complete the 'larrysArray' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY A as parameter.
 */

function larrysArray(A: number[]): string {
  // Write your code here
  var parity = 0;
  for (let i = 0; i < A.length - 1; i++) {
      for (let j = i + 1; j < A.length; j++) {
          if (A[i] > A[j]) parity++;
      }
  }
  return parity % 2 ? 'NO' : 'YES';
}

function main() {
  const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

  const t: number = parseInt(readLine().trim(), 10);

  for (let tItr: number = 0; tItr < t; tItr++) {
      const n: number = parseInt(readLine().trim(), 10);

      const A: number[] = readLine().replace(/\s+$/g, '').split(' ').map(ATemp => parseInt(ATemp, 10));

      const result: string = larrysArray(A);

      ws.write(result + '\n');
  }

  ws.end();
}
o return a STRING.
 * The function accepts INTEGER_ARRAY A as parameter.
 */

function larrysArray(A: number[]): string {
    // Write your code here
    var parity = 0;
    for (let i = 0; i < A.length - 1; i++) {
        for (let j = i + 1; j < A.length; j++) {
            if (A[i] > A[j]) parity++;
        }
    }
    return parity % 2 ? 'NO' : 'YES';
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const t: number = parseInt(readLine().trim(), 10);

    for (let tItr: number = 0; tItr < t; tItr++) {
        const n: number = parseInt(readLine().trim(), 10);

        const A: number[] = readLine().replace(/\s+$/g, '').split(' ').map(ATemp => parseInt(ATemp, 10));

        const result: string = larrysArray(A);

        ws.write(result + '\n');
    }

    ws.end();
}
