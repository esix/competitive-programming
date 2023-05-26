'use strict';

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
 * Complete the 'almostSorted' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

function almostSorted(arr: number[]): void {
    const sorted = arr.slice(0).sort((a, b) => a - b);
    const ne = arr.map((_, idx) => arr[idx] !== sorted[idx]);
    
    const numOfWrong = ne.filter(Boolean).length;
    if (numOfWrong === 0) {
        console.log('yes');
        return;
    }
    const idx = ne.indexOf(true);

    if (numOfWrong === 2) {
        const idx2 = ne.indexOf(true, idx + 1);
        console.log('yes');
        console.log('swap', idx + 1, idx2 + 1);
        return;
    }

    let idx2 = ne.lastIndexOf(true);
    for (let i = 0; i <= idx2 - idx; i++) {
        if (sorted[idx + i] !== arr[idx2 - i]) {
            console.log('no');
            return;
        }
    }
        
    console.log('yes');
    console.log('reverse', idx + 1, idx2 + 1);
}

function main() {
    const n: number = parseInt(readLine().trim(), 10);

    const arr: number[] = readLine().replace(/\s+$/g, '').split(' ').map(arrTemp => parseInt(arrTemp, 10));

    almostSorted(arr);
}
