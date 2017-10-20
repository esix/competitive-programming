# [Ford-Bellman](http://www.e-olymp.com/en/problems/1453)

Given a directed graph, that can contain multiple edges and loops. Each edge has a weight that is expressed by a number (possibly negative). It is guaranteed that there are no cycles of negative weight.

Calculate the length of the shortest paths from the vertex number 1 to all other vertices.

## Input

First the number of vertices **n (1 ≤ n ≤ 100)** is given. It is followed by the number of edges **m (0 ≤ m ≤ 10000)**. Next **m** triples describe the edges: beginning of the edge, the end of the edge and its weight (an integer from **-100** to **100**).

## Output

Print n numbers - the distance from the vertex number **1** to all other vertices of the graph. If the path to the corresponding vertex does not exist, instead of the path length print the number **30000**.

*Time limit 1 seconds*

*Memory limit 64 MiB*


## Input example #1

```
4 5
1 2 10
2 3 10
1 3 100
3 1 -10
2 3 1
```

## Output example #1

```
0 10 11 30000
```
