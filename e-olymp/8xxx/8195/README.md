# Grid [⬀](https://www.e-olymp.com/en/problems/8195)

You are on the top left square of an m * n grid, where each square on the grid has a digit on it. From a given square that has digit k on it, a move consists of jumping exactly k squares in one of the four cardinal directions. What is the minimum number of moves required to get from the top left corner to the bottom right corner?

## Input

The first line contains two space-separated positive integers m and n (1 ≤ m, n ≤ 500). It is guaranteed that at least one of m and n is greater than 1. The next m lines each consists of n digits, describing the m * n grid. Each digit is between 0 and 9.

## Output

Print, on a single line, a single integer denoting the minimum number of moves needed to get from the top-left corner to the bottom-right corner. If it is impossible to reach the bottom-right corner, print IMPOSSIBLE instead.

_Time limit 1 second_

_Memory limit 128 MiB_

## Input example #1
```
2 2
11
11
```

## Output example #1
```
2
```

## Input example #2
```
2 2
22
22
```

## Output example #2
```
IMPOSSIBLE
```
