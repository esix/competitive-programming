# Bishops on a Toral Board [⬀](https://www.e-olymp.com/en/contests/8903/problems/76958)

A bishop is a chess piece that can move in any diagonal direction to any number of cells.

Imagine that we take a board of a size mхn and connect its top and bottom edges, and its left and right edges, so that it would have a form of a torus. For example, on a 7×10 board the neighbours of a cell (4, 1) would be (3, 10), (3, 1), (3, 2), (4, 10), (4, 2), (5, 10), (5, 1), (5, 2); the neighbours of a cell (1, 10) - (7, 9), (7, 10), (7, 1), (1, 9), (1, 1),(2, 9), (2, 10), (2, 1).

On a toral board chess pieces are no longer limited with the edges, and, for example, on a 7×10 board a bishop from any cell can move to any other cell of the board in one turn, say, from cell (2, 1) to cell (7, 9) by a path (2, 1) → (1, 10) → (7, 9).

Let us say that a set of bishops covers the board if one can move some bishop to any free cell in one turn. In other words, each cell is either occupied or threatened by some bishop.

Your task is to find out what is the minimal number of bishops one needs to cover the m×n toral board.

## Input

Input file contains m and n separated by a space (1 ≤ n, m ≤ 10100).

## Output

Output the minimal number of bishops needed to cover the m×n toral board.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example

Sample 1
```
2 2
```

Sample 2
```
7 10
```

## Output example

Sample 1
```
2
```

Sample 1
```
1
```