# Islands [⬀](https://www.e-olymp.com/en/contests/9290/problems/80899)

You are mapping a faraway planet using a satellite.

Your satellite has captured an image of the planet's surface. The photographed section can be modeled as a grid. Each grid cell is either land, water, or covered by clouds. Clouds mean that the surface could either be land or water, but we can't tell.

An island is a set of connected land cells. Two cells are considered connected if they share an edge.

Given the image, determine the maximum number of islands that is consistent with the given information.

## Input

The first line contains two space-separated integers n and m (1 ≤ n, m ≤ 40).

Each of the next n lines contains m characters, describing the satellite image. Land cells are denoted by L, water cells are denoted by W, and cells covered by clouds are denoted by C.

## Output

Print a single integer indicating the maximum number of islands that is consistent with the given grid.

## Input example #1
```
5 4
LLWL
CCCC
CCCC
CCCC
LWLL
```

## Output example #1
```
8
```
