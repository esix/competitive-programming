# From adjacency matrix to the list of edges [⬀](https://www.e-olymp.com/en/contests/9060/problems/78601)

The simple not oriented graph is given by the adjacency matrix. Print its representation as a list of edges.

## Input

The first line contains the number n (1 ≤ n ≤ 100) of vertices in a graph. Each of the next n lines contains n elements - the description of adjacency matrix.

## Output

Print the list of edges, ordered by the first vertex in a pair that describes an edge. If there is no edges in a graph, print an empty line.

_Time limit 1 second_

_Memory limit 256 MiB_

## Input example #1
```
3
0 1 1
1 0 1
1 1 0
```

## Output example #1
```
1 2
1 3
2 3
```
