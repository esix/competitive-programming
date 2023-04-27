# Checking for an undirected graph [⬀](https://www.e-olymp.com/en/problems/2470)


For a given square matrix n x n of zeros and ones determine whether it can be the adjacency matrix of a simple undirected graph. The simple graph does not contain loops and multiple edges.

## Input

The first line contains the value of n (1 ≤ n ≤ 100). Each of the next n lines contains n numbers, describing the adjacency matrix.

## Output

Print YES, if the graph is undirected and NO otherwise.

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
YES
```

## Input example #2
```
3
0 1 1
1 0 1
0 1 0
```

## Output example #2
```
NO
```
