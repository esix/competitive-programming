# [Build Your Home](http://poj.org/problem?id=3907)

## Description

Mr. Tenant is going to buy a new house. In fact, he is going to buy a piece of land and build his new house on it. In order to decide which piece of land to buy, Mr. Tenant needs a program which will give a score to each piece. Each candidate piece of land is a polygonal shape (not necessarily convex), and Mr. Tenant wonders what the best score is. Among possible scores, he considered the number of vertices, sum of angles, minimum number of required guards, and so forth. Finally, Mr. Tenant decided that the best score for a piece of land would simply be its area. Your task is to write the desired scoring program.

## Input

The input file consists of multiple pieces of land. Each piece is a simple polygon (that is, a polygon which does not intersect itself). A polygon description starts with a positive integer number `k`, followed by k vertices, where each vertex consists of two coordinates (floating-point numbers): `x` and `y`. Naturally, the last vertex is connected by an edge to the first vertex. Note that each polygon can be ordered either clockwise or counterclockwise. The input ends with a `0` (the number zero).

## Output

For each piece of land, the output should consist of exactly one line containing the score of that piece, rounded to the nearest integer number. (Halves should be rounded up, but Mr. Tenant never faced such cases.)

### Sample Input
```
1   123.45 67.890 
3   0.001 0   1.999 0   0 2 
5   10 10   10 12   11 11   12 12   12.0 10.0 
0
```

### Sample Output
```
0
2
3
```

## Hint

The scoring program has to handle well degenerate cases, such as, polygons with only one or two vertices.

## Source

Southeastern European Regional Programming Contest 2008
