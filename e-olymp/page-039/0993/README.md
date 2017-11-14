# [Traffic lights](https://www.e-olymp.com/en/problems/993)

In the cave there are m tunnels and n junctions, each tunnel connects two crossroads. Mouse King decided to install the traffic light in every tunnel before every intersection. Write a program to calculate how many traffic lights must be installed on each intersection. Intersections are numbered from 1 to n.

## Input

The first line contains two numbers n and m (0 < n ≤ 100, 0 ≤ m ≤ n ·(n - 1) / 2). The following m lines contain two integers i and j (1 ≤ i, j ≤ n), which means that the intersections i and j are connected with a tunnel.

## Output

Print n numbers: k-th number indicates the number of traffic signals at the k-th intersection.

We can assume that any two crossing connected by no more than one tunnel. No tunnels from the intersection i to him.

_Time limit 1 second_

_Memory limit 122.17 MiB_

## Input example #1
```
7 10
5 1
3 2
7 1
5 2
7 4
6 5
6 4
7 5
2 1
5 3
```

## Output example #1
```
3 3 2 2 5 2 3
```
