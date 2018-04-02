# [Red and Black](http://poj.org/problem?id=1979)

## Description

There is a rectangular room, covered with square tiles. Each tile is colored either red or black. A man is standing on a black tile. From a tile, he can move to one of four adjacent tiles. But he can't move on red tiles, he can move only on black tiles. 

Write a program to count the number of black tiles which he can reach by repeating the moves described above. 

## Input

The input consists of multiple data sets. A data set starts with a line containing two positive integers W and H; W and H are the numbers of tiles in the x- and y- directions, respectively. W and H are not more than 20. 

There are H more lines in the data set, each of which includes W characters. Each character represents the color of a tile as follows. 

- `'.'` - a black tile 
- `'#'` - a red tile 
- `'@'` - a man on a black tile(appears exactly once in a data set) 

The end of the input is indicated by a line consisting of two zeros. 

## Output

For each data set, your program should output a line which contains the number of tiles he can reach from the initial tile (including itself).

## Sample Input
```
6 9
....#.
.....#
......
......
......
......
......
#@...#
.#..#.
11 9
.#.........
.#.#######.
.#.#.....#.
.#.#.###.#.
.#.#..@#.#.
.#.#####.#.
.#.......#.
.#########.
...........
11 6
..#..#..#..
..#..#..#..
..#..#..###
..#..#..#@.
..#..#..#..
..#..#..#..
7 7
..#.#..
..#.#..
###.###
...@...
###.###
..#.#..
..#.#..
0 0
```

## Sample Output
```
45
59
6
13
```

