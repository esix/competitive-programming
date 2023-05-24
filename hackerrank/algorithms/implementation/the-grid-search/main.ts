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
 * Complete the 'gridSearch' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING_ARRAY G
 *  2. STRING_ARRAY P
 */

function gridSearch(G: string[], P: string[]): string {
    const X_RANGE = new Array(G[0].length).fill(0).map((_, idx) => idx);
    
    for (let i = 0; i < G.length - P.length + 1; i++) {
        let prevS = new Set(X_RANGE);
        for (let j = 0; j < P.length; j++) {
            let s = new Set<number>(), pos = -1;
            while ((pos = G[i + j].indexOf(P[j], pos + 1)) !== -1) {
                if (prevS.has(pos))
                    s.add(pos);
            }
            prevS = s;
            if (prevS.size === 0) break;
        }
        if (prevS.size !== 0) return 'YES';
    }
    return 'NO';
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const t: number = parseInt(readLine().trim(), 10);

    for (let tItr: number = 0; tItr < t; tItr++) {
        const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

        const R: number = parseInt(firstMultipleInput[0], 10);

        const C: number = parseInt(firstMultipleInput[1], 10);

        let G: string[] = [];

        for (let i: number = 0; i < R; i++) {
            const GItem: string = readLine();
            G.push(GItem);
        }

        const secondMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

        const r: number = parseInt(secondMultipleInput[0], 10);

        const c: number = parseInt(secondMultipleInput[1], 10);

        let P: string[] = [];

        for (let i: number = 0; i < r; i++) {
            const PItem: string = readLine();
            P.push(PItem);
        }

        const result: string = gridSearch(G, P);

        ws.write(result + '\n');
    }

    ws.end();
}
