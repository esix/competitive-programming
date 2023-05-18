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
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

function climbingLeaderboard(ranked: number[], player: number[]): number[] {
    const searchIndex = (v: any) => {
        if (v > ranked[0]) return 0;
        if (ranked[ranked.length - 1] > v) return ranked.length;
        let s = 0, e = ranked.length - 1;
        while (e - s > 1) {
            if (v === ranked[s]) return s;
            let m = (e + s) >> 1;
            if (ranked[m] == v) return m;
            else if (ranked[m] > v) s = m;
            else e = m; 
        }
        return e;
    };
    let pos = new Array(ranked.length + 1), cur = 1;
    pos[0] = 1;
    for (let i = 1; i < ranked.length; i++) {
        if (ranked[i - 1] === ranked[i]) pos[i] = cur;
        else pos[i] = ++cur;
    }
    pos[ranked.length] = ++cur;
    
    return player.map((v) => {
        const idx = searchIndex(v)
        return pos[idx];
    });
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const rankedCount: number = parseInt(readLine().trim(), 10);

    const ranked: number[] = readLine().replace(/\s+$/g, '').split(' ').map(rankedTemp => parseInt(rankedTemp, 10));

    const playerCount: number = parseInt(readLine().trim(), 10);

    const player: number[] = readLine().replace(/\s+$/g, '').split(' ').map(playerTemp => parseInt(playerTemp, 10));

    const result: number[] = climbingLeaderboard(ranked, player);

    ws.write(result.join('\n') + '\n');

    ws.end();
}
