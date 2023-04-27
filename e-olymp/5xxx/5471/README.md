# Граф 1, 1/2, 1/3, 1/4 [⬀](https://www.e-olymp.com/en/problems/5471)

Given connected, directed graph with edge weights 1, 1/2, 1/3, 1/4. Find the shortest path from vertex 1 to all others.

## Input

The first line contains two integers n and m (1 ≤ n ≤ 5 *10⁵, 1 ≤ m ≤ 8 *10⁵) - the number of vertices and edges in a graph. The edges are given on separate lines. The edges are given with three integers: u, v и w (1 ≤ u, v ≤ n, u ≤ v, 1 ≤ w ≤ 4), meaning the directed edge from u to v with weight 1/w.

## Output

For each vertex from 2 to n print one number - the length of the shortest path from vertex 1 to it with no less than 8 digits after the decimal point.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
4 4
1 2 1
2 3 2
3 4 4
4 1 3
```

## Output example #1
```
1.00000000
0.58333333
0.33333333
```
