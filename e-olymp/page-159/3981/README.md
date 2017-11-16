# [From adjacency matrix to adjacency list](https://www.e-olymp.com/en/problems/3981)

A simple directed graph is given with an adjacency matrix. Print its representation in the form of adjacency list.

## Input

The first line contains the number of vertices in a graph n (1 ≤ n ≤ 100). Then the adjacency matrix is given. It is guaranteed that a graph does not contain loops.

## Output

Print n lines - the adjacency lists of the graph. Print in the i-th line the number of edges adjacent to the i-th vertex, and then the vertex numbers where these edges go in increasing order.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
5
0 0 1 0 0
1 0 1 0 0
0 0 0 0 1
1 1 0 0 0
1 1 0 0 0
```

## Output example #1
````
1 3
2 1 3
1 5
2 1 2
2 1 2
```

