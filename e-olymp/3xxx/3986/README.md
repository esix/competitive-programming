# Sources and sinks [⬀](https://www.e-olymp.com/en/problems/3986)

The vertex of directed graph is called source if no edge comes into it, and sink if no edge comes out of it.

The directed graph is given with adjacent matrix. Find all its sources and sinks.

## Input

The first line contains the number of vertices in a graph n (1 ≤ n ≤ 100), then the adjacent matrix is given - n lines with n numbers, each of them equals to 0 or 1.

## Output

Print in the first line the number of sources in a graph, and then sources in increasing order. Print in the second line the information about sinks in the same format.

_Time limit 1 second_

_Memory limit 64 MiB_

## Input example #1
```
5
0 0 0 0 0
0 0 0 0 1
1 1 0 0 0
0 0 0 0 0
0 0 0 0 0
```

## Output example #1
```
2 3 4
3 1 4 5
```

