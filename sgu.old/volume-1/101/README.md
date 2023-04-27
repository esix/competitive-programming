# Domino [⬀](http://acm.sgu.ru/problem.php?contest=0&problem=101)


_time limit per test: 0.25 sec._

_memory limit per test: 4096 KB_

_Dominoes – game played with small, rectangular blocks of wood or other material, each identified by a number of dots, or pips, on its face. The blocks usually are called bones, dominoes, or pieces and sometimes men, stones, or even cards.
The face of each piece is divided, by a line or ridge, into two squares, each of which is marked as would be a pair of dice..._

_The principle in nearly all modern dominoes games is to match one end of a piece to another that is identically or reciprocally numbered._

_ENCYCLOPÆDIA BRITANNICA_

Given a set of domino pieces where each side is marked with two digits from 0 to 6. Your task is to arrange pieces in a line such way, that they touch through equal marked sides. It is possible to rotate pieces changing left and right side.

## Input

The first line of the input contains a single integer N (1 ≤ N ≤ 100) representing the total number of pieces in the domino set. The following N lines describe pieces. Each piece is represented on a separate line in a form of two digits from 0 to 6 separated by a space.

## Output

Write “No solution” if it is impossible to arrange them described way. If it is possible, write any of way. Pieces must be written in left-to-right order. Every of N lines must contains number of current domino piece and sign “+” or “-“ (first means that you not rotate that piece, and second if you rotate it).

## Sample Input
```
5
1 2
2 4
2 4
6 4
2 1
```

## Sample Output
```
2 -
5 +
1 +
3 +
4 -
```
