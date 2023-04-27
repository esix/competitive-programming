# Gravity [⬀](https://www.e-olymp.com/en/problems/8216)

You would like to implement a simple simulation of gravity on a 2-dimensional grid, consisting of n rows and m columns.

Some grid cells may contain obstacles, some may contain a single apple, and all others are empty.

The following rules are followed until no further changes are possible:

- The obstacles do not move.
- Whenever there is an empty cell immediately below an apple, the apple moves into the empty cell.

Find the final configuration of the grid after all apples have settled.

## Input

The first line contains two space-separated integers n and m (1 ≤ n, m ≤ 50). Each of the next n lines contains m characters, describing the board, from top to bottom. Obstacles are denoted as '#', apples are denoted as 'o', and empty cells are denoted as '.'.

## Output

Print, on n lines, the final configuration of the grid after executing the rules stated above.

## Input example #1
```
3 3
ooo
#..
..#
```

## Output example #1
```
o..
#.o
.o#
```

## Input example #2
```
4 2
oo
oo
o.
..
```

## Output example #2
```
..
o.
oo
oo
```
