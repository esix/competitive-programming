# Electrical Wires [⬀](https://www.e-olymp.com/en/problems/2383)

You are given an electrical circuit for a home, with a number of nodes possibly connected by wires. Any pair of nodes may be connected by at most one wire, and a node can't be connected to itself. Each node on the circuit is either an electrical outlet for the house or a connection to the main electrical grid.

You'd like to make the circuit safer and more redundant by adding as many extra wires to it as possible. The one complication is that no two main grid connections are currently wired together (directly or indirectly), and you must preserve this, or else disaster will result. Determine the maximum number of new wires you can add to the circuit.

## Input

Consists of multiple test cases. The first line of each test case contains the number n (1 ≤ n ≤ 50) of nodes, numbered with integers from 0 to n - 1. Next n lines describes the wires that are already in place: the x-th character of the y-th line is '1' (one) if nodes x and y have a wire between them, '0' (zero) otherwise. Next line gives the number of nodes, connected to the main electrical grid, followed by the list of these nodes.

## Output

For each test case print in a separate line the maximum number of new wires you can add to the circuit.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example
```
3
000
000
000
2 0 1
5
01000
10100
01010
00100
00000
2 2 4
```

## Output example
```
1
3
```
