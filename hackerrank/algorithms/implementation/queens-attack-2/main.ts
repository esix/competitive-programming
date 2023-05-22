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
 * Complete the 'queensAttack' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER r_q
 *  4. INTEGER c_q
 *  5. 2D_INTEGER_ARRAY obstacles
 */

function queensAttack(n: number, k: number, r_q: number, c_q: number, obstacles: number[][]): number {
    const min = Math.min, max = Math.max, abs = Math.abs, 
          q = {t: r_q - 1, l: c_q - 1, r: n - c_q, b: n - r_q};
    let rays = [
         q.t, min(q.t, q.r), q.r, min(q.r, q.b), 
         q.b, min(q.b, q.l), q.l, min(q.l, q.t)];
         
    const getRayIndex = (r: number, c: number) => {
      const dc = c - c_q, dr = r - r_q, diag = abs(dc) === abs(dr);
      if (dc === 0 && dr < 0) return 0;
      else if (diag && dc > 0 && dr < 0) return 1;
      else if (dr === 0 && dc > 0) return 2;
      else if (diag && dc > 0 && dr > 0) return 3;
      else if (dc === 0 && dr > 0) return 4;
      else if (diag && dc < 0 && dr > 0) return 5;
      else if (dr === 0 && dc < 0) return 6;
      else if (diag && dc < 0 && dr < 0) return 7;
      else return -1;
    };
    let result = 0;
    obstacles.forEach(([r, c]) => {
        const idx = getRayIndex(r, c);
        if (idx !== -1) {
            const dist = max(abs(r - r_q), abs(c - c_q)) - 1;
            rays[idx] = min(rays[idx], dist);
        }
    });
    return rays[0] + rays[1] + rays[2] + rays[3] + 
           rays[4] + rays[5] + rays[6] + rays[7];
}

function main() {
    const ws: WriteStream = createWriteStream(process.env['OUTPUT_PATH']);

    const firstMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const n: number = parseInt(firstMultipleInput[0], 10);

    const k: number = parseInt(firstMultipleInput[1], 10);

    const secondMultipleInput: string[] = readLine().replace(/\s+$/g, '').split(' ');

    const r_q: number = parseInt(secondMultipleInput[0], 10);

    const c_q: number = parseInt(secondMultipleInput[1], 10);

    let obstacles: number[][] = Array(k);

    for (let i: number = 0; i < k; i++) {
        obstacles[i] = readLine().replace(/\s+$/g, '').split(' ').map(obstaclesTemp => parseInt(obstaclesTemp, 10));
    }

    const result: number = queensAttack(n, k, r_q, c_q, obstacles);

    ws.write(result + '\n');

    ws.end();
}
