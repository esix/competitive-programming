# [Parent](https://www.e-olymp.com/en/contests/9116/problems/79187)

Write a program that determines for two nodes of a tree whether the first one is a parent of another.

## Input

The first line contains the number of vertices n (1 ≤ n ≤ 100000) in a tree. The second line contains n numbers, the i-th one gives the vertex number of direct ancestor for the vertex i. If this value is zero, then the vertex is a root of a tree.

The third line contains the number of queries m (1 ≤ m ≤ 100000). Each of the next m lines contains two different numbers a and b (1 ≤ a, b ≤ n).

## Output

For each of the m queries print on a separate line number 1, if the vertex a is one of the parents of a vertex b, and 0 otherwise.

_Time limit 1 second_

_Memory limit 256 MiB_

## Input example
```
6
0 1 1 2 3 3
5
4 1
1 4
3 6
2 6
6 5
```

## Output example
```
0
1
1
0
0
```
