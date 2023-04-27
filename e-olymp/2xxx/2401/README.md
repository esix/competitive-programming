# Breadth First Search [⬀](https://www.e-olymp.com/en/problems/2401)

Given an undirected graph. Find the distance from one given vertex to another.

## Input

The first line contains three natural numbers n, s and f (1 ≤ s, f ≤ n ≤ 100) - the number of vertices in the graph and the number of initial and final vertices, respectively. Next n lines is given in the adjacency matrix of the graph. If the value of the j-th element of the i-th row is 1, then the graph has a directed edge from vertex i to vertex j.

## Output

Print the minimum distance from the initial to final vertex. If the path does not exist, print 0.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example
```
4 4 3
0 1 1 1
1 0 1 0
1 1 0 0
1 0 0 0
```

## Output example
```
2
```
